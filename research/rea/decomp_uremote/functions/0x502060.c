// rea decompile_all
// name: FUN_00502060
// address: 0x502060
// body: available
// range: 0x502060-0x5022cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00502060(ushort *param_1,ushort param_2)

{
  int iVar1;
  int *in_ECX;
  byte *local_10;
  ushort *local_c;
  ushort local_8;
  
  FUN_00501ba0();
  if (param_1 != (ushort *)0x0) {
    if ((uint)*(ushort *)(in_ECX + 1) < (uint)param_2 * 3 + 1) {
      if (*in_ECX != 0) {
        FUN_005b13e8(*in_ECX);
      }
      *(ushort *)(in_ECX + 1) = param_2 * 3 + 1;
      iVar1 = FUN_005b04d6((short)in_ECX[1]);
      *in_ECX = iVar1;
      if (*in_ECX != 0) {
        _memset((void *)*in_ECX,0,(uint)*(ushort *)(in_ECX + 1));
      }
    }
    local_c = param_1;
    local_10 = (byte *)*in_ECX;
    local_8 = param_2;
    while ((*local_c != 0 && (local_8 != 0))) {
      if (*local_c < 0x80) {
        *local_10 = (byte)*local_c & 0x7f;
        local_10 = local_10 + 1;
        *(short *)((int)in_ECX + 6) = *(short *)((int)in_ECX + 6) + 1;
      }
      else if ((*local_c < 0x80) || (0x7ff < *local_c)) {
        if (((0x7ff < *local_c) && (*local_c < 0xd800)) || (0xdfff < *local_c)) {
          *local_10 = (byte)((int)(*local_c & 0xf000) >> 0xc) | 0xe0;
          *(short *)((int)in_ECX + 6) = *(short *)((int)in_ECX + 6) + 1;
          local_10[1] = (byte)((int)(*local_c & 0xfc0) >> 6) | 0x80;
          *(short *)((int)in_ECX + 6) = *(short *)((int)in_ECX + 6) + 1;
          local_10[2] = (byte)*local_c & 0x3f | 0x80;
          local_10 = local_10 + 3;
          *(short *)((int)in_ECX + 6) = *(short *)((int)in_ECX + 6) + 1;
        }
      }
      else {
        *local_10 = (byte)((int)(*local_c & 0x7c0) >> 6) | 0xc0;
        *(short *)((int)in_ECX + 6) = *(short *)((int)in_ECX + 6) + 1;
        local_10[1] = (byte)*local_c & 0x3f | 0x80;
        local_10 = local_10 + 2;
        *(short *)((int)in_ECX + 6) = *(short *)((int)in_ECX + 6) + 1;
      }
      local_c = local_c + 1;
      local_8 = local_8 - 1;
    }
    *local_10 = 0;
  }
  return;
}

