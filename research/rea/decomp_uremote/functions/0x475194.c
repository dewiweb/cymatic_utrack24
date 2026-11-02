// rea decompile_all
// name: FUN_00475194
// address: 0x475194
// body: available
// range: 0x475194-0x4752d1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00475194(void)

{
  float *in_EAX;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *unaff_ESI;
  
  uVar1 = FUN_004a8e4a(*in_EAX * 256.0);
  *unaff_ESI = uVar1;
  uVar1 = FUN_004a8e4a(in_EAX[1] * 256.0);
  unaff_ESI[1] = uVar1;
  uVar1 = FUN_004a8e4a((in_EAX[2] + *in_EAX) * 256.0);
  unaff_ESI[2] = uVar1;
  uVar2 = FUN_004a8e4a((in_EAX[3] + in_EAX[1]) * 256.0);
  uVar3 = unaff_ESI[1];
  uVar1 = (int)uVar3 >> 8;
  unaff_ESI[3] = uVar2;
  unaff_ESI[4] = uVar1;
  if (uVar1 == (int)uVar2 >> 8) {
    unaff_ESI[10] = 0;
    unaff_ESI[8] = uVar2 - uVar3;
    uVar1 = uVar1 + 1;
    unaff_ESI[1] = uVar1;
    unaff_ESI[3] = uVar1;
    unaff_ESI[6] = uVar1;
  }
  else {
    if ((uVar3 & 0xff) == 0) {
      unaff_ESI[8] = 0;
    }
    else {
      unaff_ESI[8] = 0xff - (uVar3 & 0xff);
      uVar1 = uVar1 + 1;
    }
    uVar3 = unaff_ESI[3];
    unaff_ESI[3] = (int)unaff_ESI[3] >> 8;
    unaff_ESI[1] = uVar1;
    unaff_ESI[10] = uVar3 & 0xff;
    unaff_ESI[6] = (uint)(unaff_ESI[10] != 0) + unaff_ESI[3];
  }
  uVar1 = *unaff_ESI;
  uVar3 = (int)uVar1 >> 8;
  unaff_ESI[5] = uVar3;
  if (uVar3 == (int)unaff_ESI[2] >> 8) {
    unaff_ESI[0xb] = 0;
    uVar3 = uVar3 + 1;
    unaff_ESI[9] = unaff_ESI[2] - uVar1;
    *unaff_ESI = uVar3;
    unaff_ESI[7] = uVar3;
  }
  else {
    if ((uVar1 & 0xff) == 0) {
      unaff_ESI[9] = 0;
    }
    else {
      unaff_ESI[9] = 0xff - (uVar1 & 0xff);
      uVar3 = uVar3 + 1;
    }
    *unaff_ESI = uVar3;
    unaff_ESI[0xb] = unaff_ESI[2] & 0xff;
    uVar3 = (int)unaff_ESI[2] >> 8;
    unaff_ESI[7] = (unaff_ESI[0xb] != 0) + uVar3;
  }
  unaff_ESI[2] = uVar3;
  return;
}

