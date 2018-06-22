using System;
using System.Net;
using System.Net.Sockets;
using System.Threading;
using Microsoft.SPOT;
using Microsoft.SPOT.Hardware;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

namespace CTRE.Native
{
    public static class System
    {
        public static int IoControl(uint ioControlCode, UInt64 ioControlParam, byte[] inValue, byte[] outValue)
        {
            return 0;
        }
    }
    public static class CAN
    {
        /**
		 * @param arbID CAN Frame Arbitration ID to send.  Set bottom 29 bits or 11 bits depending on arbid type.  
		 * 													Set BIT31 if using 11bit IDS.
		 * @param data data bytes to send.  Parameter is little-endian, so the first byte to transmit is the LSB.
		 * @param len number of bytes to send. Must be [0,8].
		 * @param periodMs the period at which to send this frame.  If '0', the frame is sent once immedietely.  
		 * 											If nonzero, the frame is sent periodically at this rate.  Future calls of this API with the same
		 *												arbID will update the data bytes, but will also honor the period regardless
		 *												of how often this API is called.  
		 *											Pass 0xFFFFFFFF to simply update the frame's buffer, but not change it's transmit period. Otherwise frame period
		 *												will match the last value passed into this call.
		 * @return '0' if successful, negative error code if API failed.
		 */
        public static int Send(UInt32 arbId, UInt64 data, UInt32 len, UInt32 periodMs)
        {
            return 0;
        }
        /**
		 * @param arbID CAN Frame Arbitration ID to receive.  The arbid is in the bottom 29 bits or 11 bits depending on arbid type.  
		 * 													BIT31 is set if ID is 11bit.
		 * @param data [out] data bytes to send.  Parameter is little-endian, so the first byte to transmit is the LSB.
		 * @param len [out] number of bytes to send. Must be [0,8].
		 * @param periodMs the period at which to send this frame.  If '0', the frame is sent once immedietely.  If nonzero, the frame is
		 *												sent periodically at this rate.  Future calls of this API with the same
		 *												arbID will update the data bytes, but will also honor the period regardless
		 *												of how often this API is called.
		 * @return '0' if frame was received since last call. '1' if frame was not received since last but params still filled in with latest received values.
		 *												Negative error code if API failed.
		 */
        public static int Receive(UInt32 arbId, ref UInt64 data, ref UInt32 len)
        {
            return 0;
        }
        /**
		 * @param arbID CAN Frame Arbitration ID of the buffer to retrieve. BIT31 is set for 11bit IDs. 
		 * @param data [out] the current bytes being sent for this arbID at the period specified in the last call to Send().
		 * @return '0' if successful, negative error code if API failed.
		 */
        public static int GetSendBuffer(UInt32 arbId, ref UInt64 data)
        {
            return 0;
        }

        [StructLayout(LayoutKind.Sequential, Pack = 1)]
        public struct CanSessionMsg
        {
            public UInt32 arbId; //!< ArbID of CAN Frame.  Bottom 29 bits holds the numeric value.  BIT31 is set if ArbID is 11bit, otherwise ArbID is 29bit.
            public UInt32 len; //!< DLC of frame, [0,8]
            public UInt32 D0D1D2D3; //!< First four bytes of data frame.  LSB is the first byte sent over the wire.
            public UInt32 D4D5D6D7; //!< Last four bytes of data frame.  LSB is the fifth byte sent over the wire.
        }

        /**
		 * Open a buffered stream where CAN frames that pass an arbid Mask/Value pair are buffered into.  
		 *		The filter checks each frame's ID: (ARBID & MASK) == VALUE, if it passes then it is buffered.
		 * @param handle [out] handle for newly created stream to use with other functions.
		 * @param arbIdMask The mask bits to compare each received  frame's arbid to. 
		 * @param arbIdValue The value bits to compare each received  frame's arbid to. 
		 * @return '0' if successful, negative error code if API failed.
		 */

        public static int OpenStream(ref uint handle, UInt32 arbIdMask, UInt32 arbIdValue)
        {
            return 0;
        }
        /**
		 * Gets the number of buffered messages for a given stream.
		 * @param handle handle for stream.
		 * @param numMsgs [out] number of messages.
		 * @return '0' if successful, negative error code if API failed.
		 */
        public static int GetStreamSize(uint handle, ref UInt32 numMsgs)
        {
            return 0;
        }
        /**
		 * Pops a buffered messages for a given stream.
		 * @param handle handle for stream.
		 * @param arbId [out] The message arbid.
		 * @param data [out] The message data bytes.
		 * @param len [out] The message len(dlc).
		 * @param msgsRead [out] unused at time of writing. 
		 * @return '0' if successful, negative error code if API failed.
		 */
        public static int ReadStream(uint handle, ref UInt32 arbId, ref UInt64 data, ref UInt32 len, ref UInt32 msgsRead)
        {
            return 0;
        }
        /**
		 * Closes a stream
		 * @param handle handle for stream.
		 */
        public static void CloseStream(uint handle)
        {
        }
    }
    public static class Watchdog
    {
        public static int Feed(UInt32 timeMs)
        {
            return 0;
        }
        public static int GetEnableBits(ref UInt32 enabledBits)
        {
            return 0;
        }
        public static int RegisterSafeOutput(UInt32 portId)
        {
            return 0;
        }
        public static int RegisterSafePWMOutput(UInt32 PWMId)
        {
            return 0;
        }
    }
    public static class HDU
    {
        public static int GetJoy(ref Int32 updateCnt, Int32[] ints, uint numInts, float[] floats, uint numFloats)
        {
            return 0;
        }
        public static void SetMode(UInt32 mode)
        {
        }
        public static UInt32 GetMode()
        {
            return 0;
        }
    }
    public static class Misc
    {
        public static int TimeToProcess()
        {
            return 0;
        }
        public static int Bitmap_ConvertBPP(byte[] bimap, byte[] pixelBytes, uint bpp)
        {
            return 0;
        }
        public static byte[] GetBitmap(byte[] prevCall, Object obj, uint bpp)
        {
            return prevCall;
        }
    }
}
