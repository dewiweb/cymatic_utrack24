// rea decompile_all
// name: FUN_005f3ed0
// address: 0x5f3ed0
// body: available
// range: 0x5f3ed0-0x5f40be inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005f3ed0(int param_1,int *param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  undefined4 *in_ECX;
  uint in_EDX;
  uint uVar7;
  bool bVar8;
  int local_18;
  uint local_10;
  uint local_c;
  
  uVar2 = 1 << ((byte)param_1 & 0x1f);
  iVar5 = in_ECX[1];
  uVar7 = *(uint *)(iVar5 + 0x468);
  if (param_1 == 0) {
    uVar3 = uVar7 - in_EDX;
  }
  else {
    uVar3 = uVar7 >> ((byte)param_1 & 0x1f);
  }
  bVar8 = param_4 != 0;
  local_18 = 0x1f;
  uVar4 = 0xf;
  if (param_4 != 0) {
    uVar4 = 0x1f;
  }
  uVar1 = uVar3;
  if (param_1 == 0) {
    uVar1 = uVar7;
  }
  if (uVar1 < in_EDX) {
    if (*(int *)(iVar5 + 0xe1c) == 0) {
      (**(code **)(iVar5 + 0x1c))();
    }
    *(undefined4 *)*in_ECX = 2;
    return 0;
  }
  iVar5 = FUN_005fc1f0();
  if (iVar5 == 0) {
    *(undefined4 *)*in_ECX = 8;
    return 0;
  }
  param_4 = 0;
  local_c = 0;
  if (uVar2 != 0) {
    do {
      iVar5 = FUN_005feec0(bVar8 + '\x04');
      if (iVar5 == 0) {
        return 0;
      }
      *(uint *)(*param_2 + local_c * 4) = local_10;
      if (local_10 < uVar4) {
        *(undefined4 *)(param_2[1] + local_c * 4) = 0;
        uVar7 = uVar3;
        if ((param_1 != 0) && (local_c == 0)) {
          uVar7 = uVar3 - in_EDX;
        }
        iVar5 = FUN_005fe8b0(uVar7,local_10);
        if (iVar5 == 0) {
          return 0;
        }
        param_4 = param_4 + uVar7;
      }
      else {
        iVar5 = FUN_005feec0(5);
        if (iVar5 == 0) {
          return 0;
        }
        *(uint *)(param_2[1] + local_c * 4) = local_10;
        if ((param_1 == 0) || (uVar7 = in_EDX, local_c != 0)) {
          uVar7 = 0;
        }
        for (; uVar7 < uVar3; uVar7 = uVar7 + 1) {
          if (local_10 == 0) {
            local_18 = 0;
          }
          else {
            iVar5 = FUN_005feec0(local_10);
            if (iVar5 == 0) {
              return 0;
            }
          }
          bVar6 = 0x20 - (char)local_10;
          local_18 = (local_18 << (bVar6 & 0x1f)) >> (bVar6 & 0x1f);
          *(int *)(param_3 + param_4 * 4) = local_18;
          param_4 = param_4 + 1;
        }
      }
      local_c = local_c + 1;
    } while (local_c < uVar2);
  }
  return 1;
}

