// rea decompile_all
// name: FUN_005fe5e0
// address: 0x5fe5e0
// body: available
// range: 0x5fe5e0-0x5fe770 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005fe5e0(int param_1,int *param_2)

{
  int iVar1;
  uint *in_EDX;
  byte bVar2;
  uint local_1c;
  uint uStack_18;
  uint local_c;
  int local_8;
  
  iVar1 = FUN_005feec0(8);
  if (iVar1 != 0) {
    bVar2 = (byte)local_c;
    if (param_1 != 0) {
      iVar1 = *param_2;
      *(byte *)(iVar1 + param_1) = bVar2;
      *param_2 = iVar1 + 1;
    }
    if (-1 < (char)bVar2) {
      *in_EDX = local_c;
      in_EDX[1] = 0;
      return 1;
    }
    if (((local_c & 0xc0) == 0) || ((local_c & 0x20) != 0)) {
      if (((local_c & 0xe0) == 0) || ((local_c & 0x10) != 0)) {
        if (((local_c & 0xf0) == 0) || ((local_c & 8) != 0)) {
          if (((local_c & 0xf8) == 0) || ((local_c & 4) != 0)) {
            if (((local_c & 0xfc) == 0) || ((local_c & 2) != 0)) {
              if (((local_c & 0xfe) == 0) || ((local_c & 1) != 0)) {
                *in_EDX = 0xffffffff;
                in_EDX[1] = 0xffffffff;
                return 1;
              }
              local_8 = 6;
              uStack_18 = 0;
              local_1c = 0;
            }
            else {
              local_1c = local_c & 1;
              local_8 = 5;
              uStack_18 = 0;
            }
          }
          else {
            local_1c = local_c & 3;
            local_8 = 4;
            uStack_18 = 0;
          }
        }
        else {
          local_1c = local_c & 7;
          local_8 = 3;
          uStack_18 = 0;
        }
      }
      else {
        local_1c = local_c & 0xf;
        local_8 = 2;
        uStack_18 = 0;
      }
    }
    else {
      local_1c = local_c & 0x1f;
      local_8 = 1;
      uStack_18 = 0;
    }
    while( true ) {
      iVar1 = FUN_005feec0(8);
      if (iVar1 == 0) break;
      if (param_1 != 0) {
        iVar1 = *param_2;
        *(byte *)(iVar1 + param_1) = bVar2;
        *param_2 = iVar1 + 1;
      }
      if ((bVar2 & 0xc0) != 0x80) {
        *in_EDX = 0xffffffff;
        in_EDX[1] = 0xffffffff;
        return 1;
      }
      uStack_18 = uStack_18 << 6 | local_1c >> 0x1a;
      local_1c = local_1c << 6 | local_c & 0x3f;
      local_8 = local_8 + -1;
      if (local_8 == 0) {
        *in_EDX = local_1c;
        in_EDX[1] = uStack_18;
        return 1;
      }
    }
  }
  return 0;
}

