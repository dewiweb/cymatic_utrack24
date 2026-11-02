// rea decompile_all
// name: FUN_00648ed0
// address: 0x648ed0
// body: available
// range: 0x648ed0-0x64902f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00648ed0(byte *param_1)

{
  int iVar1;
  bool bVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte *in_EDX;
  uint uVar7;
  byte local_108 [256];
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  uVar7 = 0;
  bVar6 = 0;
  if (in_EDX == (byte *)0x0) {
    *param_1 = 0;
  }
  else {
    bVar4 = *in_EDX;
    pbVar3 = in_EDX;
    if (bVar4 != 0) {
      bVar2 = true;
      bVar5 = bVar6;
      do {
        bVar6 = bVar5;
        if (0x4e < uVar7) break;
        pbVar3 = pbVar3 + 1;
        if (((bVar4 < 0x21) || (0x7e < bVar4)) && (bVar4 < 0xa1)) {
          if (bVar2) {
            if (bVar5 == 0) {
              bVar6 = bVar4;
            }
          }
          else {
            *param_1 = 0x20;
            uVar7 = uVar7 + 1;
            param_1 = param_1 + 1;
            bVar2 = true;
            bVar6 = bVar4;
            if (bVar4 == 0x20) {
              bVar6 = bVar5;
            }
          }
        }
        else {
          *param_1 = bVar4;
          uVar7 = uVar7 + 1;
          param_1 = param_1 + 1;
          bVar2 = false;
        }
        bVar4 = *pbVar3;
        bVar5 = bVar6;
      } while (bVar4 != 0);
      if ((uVar7 != 0) && (bVar2)) {
        uVar7 = uVar7 - 1;
        param_1 = param_1 + -1;
        if (bVar6 == 0) {
          bVar6 = 0x20;
        }
      }
    }
    *param_1 = 0;
    if (uVar7 != 0) {
      if (*pbVar3 != 0) {
        FUN_006563b0();
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      if (bVar6 != 0) {
        uVar7 = 0;
        if (*in_EDX != 0) {
          iVar1 = -(int)in_EDX;
          do {
            if (0x1e < uVar7) break;
            uVar7 = uVar7 + 1;
            in_EDX[(int)(local_108 + iVar1)] = *in_EDX;
            in_EDX = in_EDX + 1;
          } while (*in_EDX != 0);
        }
        local_108[uVar7] = 0;
        FUN_006562f0(uVar7,bVar6);
        FUN_006561f0();
      }
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

