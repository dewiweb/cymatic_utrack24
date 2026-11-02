// rea decompile_all
// name: FUN_005d7290
// address: 0x5d7290
// body: available
// range: 0x5d7290-0x5d7494 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005d7290(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int in_EDX;
  undefined4 *puVar6;
  int local_1c;
  int local_18;
  
  iVar1 = param_3;
  param_3 = 1;
  local_1c = *(int *)(iVar1 + 4);
  if (0 < local_1c) {
    piVar3 = (int *)(iVar1 + (local_1c + 1) * 4);
    local_18 = in_ECX;
    do {
      iVar1 = local_18 / *piVar3;
      iVar2 = (in_ECX / local_18) * iVar1;
      iVar4 = 1 - param_3;
      if (*piVar3 == 4) {
        FUN_005d83c0();
        param_3 = iVar4;
      }
      else if (*piVar3 == 2) {
        if (iVar4 == 0) {
          FUN_005d8820();
          param_3 = iVar4;
        }
        else {
          FUN_005d8820(param_1);
          param_3 = iVar4;
        }
      }
      else {
        if (in_ECX / local_18 != 1) {
          param_3 = iVar4;
        }
        if (param_3 == 0) {
          FUN_005d74a0(iVar1,iVar2);
          param_3 = 1;
        }
        else {
          FUN_005d74a0(iVar1,iVar2,param_1,param_1,param_1);
          param_3 = 0;
        }
      }
      piVar3 = piVar3 + -1;
      local_1c = local_1c + -1;
      local_18 = iVar1;
    } while (local_1c != 0);
    if (param_3 != 1) {
      iVar1 = 0;
      if (3 < in_ECX) {
        iVar2 = (in_ECX - 4U >> 2) + 1;
        iVar1 = iVar2 * 4;
        puVar5 = (undefined4 *)(in_EDX + 4);
        puVar6 = (undefined4 *)(param_1 + 0xc);
        do {
          puVar5[-1] = puVar6[-3];
          *puVar5 = *(undefined4 *)((param_1 - in_EDX) + -0x10 + (int)(puVar5 + 4));
          puVar5[1] = puVar6[-1];
          puVar5[2] = *puVar6;
          iVar2 = iVar2 + -1;
          puVar5 = puVar5 + 4;
          puVar6 = puVar6 + 4;
        } while (iVar2 != 0);
      }
      if (iVar1 < in_ECX) {
        iVar2 = in_ECX - iVar1;
        puVar5 = (undefined4 *)(in_EDX + iVar1 * 4);
        do {
          *puVar5 = *(undefined4 *)((int)puVar5 + (param_1 - in_EDX));
          iVar2 = iVar2 + -1;
          puVar5 = puVar5 + 1;
        } while (iVar2 != 0);
      }
    }
  }
  return;
}

