// rea decompile_all
// name: FUN_005f44f0
// address: 0x5f44f0
// body: available
// range: 0x5f44f0-0x5f46c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005f44f0(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  undefined4 *in_ECX;
  int in_EDX;
  uint *puVar4;
  uint *puVar5;
  uint local_c;
  uint local_8;
  
  iVar2 = in_EDX * 4 + 0x58;
  local_c = 0;
  puVar4 = (uint *)(in_EDX * 0x124 + 0x494 + in_ECX[1]);
  *(undefined4 *)((in_EDX + 4) * 0x124 + in_ECX[1]) = 2;
  puVar4[8] = *(uint *)(iVar2 + in_ECX[1]);
  puVar4[3] = param_2;
  if (param_2 != 0) {
    bVar3 = 0x20 - (char)param_1;
    puVar5 = puVar4 + 4;
    do {
      if (param_1 == 0) {
        local_8 = 0;
      }
      else {
        iVar1 = FUN_005feec0(param_1);
        if (iVar1 == 0) {
          return 0;
        }
      }
      local_8 = (int)(local_8 << (bVar3 & 0x1f)) >> (bVar3 & 0x1f);
      *puVar5 = local_8;
      puVar5 = puVar5 + 1;
      local_c = local_c + 1;
    } while (local_c < param_2);
  }
  iVar1 = FUN_005feec0(2);
  if (iVar1 != 0) {
    *puVar4 = local_8;
    iVar1 = in_ECX[1];
    if (1 < local_8) {
      if (*(int *)(iVar1 + 0xe1c) == 0) {
        (**(code **)(iVar1 + 0x1c))();
        *(undefined4 *)*in_ECX = 2;
        return 1;
      }
      *(int *)(iVar1 + 0x17f0) = *(int *)(iVar1 + 0x17f0) + 1;
      *(undefined4 *)*in_ECX = 2;
      return 1;
    }
    iVar1 = FUN_005feec0(4);
    if (iVar1 != 0) {
      puVar4[1] = local_8;
      iVar1 = (in_EDX + 10) * 0xc;
      puVar4[2] = in_ECX[1] + iVar1;
      if ((1 < *puVar4) ||
         (iVar2 = FUN_005f3ed0(local_8,iVar1 + in_ECX[1],*(undefined4 *)(in_ECX[1] + iVar2),
                               *puVar4 == 1), iVar2 != 0)) {
        FUN_004c2c30(*(undefined4 *)(in_ECX[1] + 0x38 + in_EDX * 4),puVar4 + 4,param_2 * 4);
        FUN_005fca20(param_2,*(int *)(in_ECX[1] + 0x38 + in_EDX * 4) + param_2 * 4);
        return 1;
      }
    }
  }
  return 0;
}

