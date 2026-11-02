// rea decompile_all
// name: FUN_00502890
// address: 0x502890
// body: available
// range: 0x502890-0x502a6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ushort FUN_00502890(ushort *param_1,ushort param_2)

{
  bool bVar1;
  int *in_ECX;
  ushort local_10;
  char *local_8;
  
  if ((param_1 == (ushort *)0x0) || (param_2 == 0)) {
    local_10 = 0;
  }
  else {
    *param_1 = 0;
    if (*(short *)((int)in_ECX + 6) == 0) {
      local_10 = 0;
    }
    else {
      bVar1 = false;
      local_10 = 0;
      local_8 = (char *)*in_ECX;
      do {
        if (*local_8 == '\0') goto LAB_00502a4e;
        if (((int)*local_8 & 0xe0U) == 0xe0) {
          if ((((char *)((uint)*(ushort *)((int)in_ECX + 6) + *in_ECX) < local_8 + 2) ||
              (((int)local_8[1] & 0x80U) == 0)) || (((int)local_8[2] & 0x80U) == 0)) {
            bVar1 = true;
            goto LAB_00502a4e;
          }
          *param_1 = (short)*local_8 << 0xc | ((short)local_8[1] & 0x3fU) << 6 |
                     (short)local_8[2] & 0x3fU;
          local_8 = local_8 + 3;
        }
        else if (((int)*local_8 & 0xc0U) == 0xc0) {
          if (((char *)((uint)*(ushort *)((int)in_ECX + 6) + *in_ECX) < local_8 + 1) ||
             (((int)local_8[1] & 0x80U) == 0)) {
            bVar1 = true;
            goto LAB_00502a4e;
          }
          *param_1 = ((short)*local_8 & 0x1fU) << 6 | (short)local_8[1] & 0x3fU;
          local_8 = local_8 + 2;
        }
        else {
          *param_1 = (short)*local_8;
          local_8 = local_8 + 1;
        }
        local_10 = local_10 + 1;
        param_1 = param_1 + 1;
      } while (local_10 < param_2);
      bVar1 = true;
LAB_00502a4e:
      if (bVar1) {
        local_10 = 0;
      }
      else {
        *param_1 = 0;
      }
    }
  }
  return local_10;
}

