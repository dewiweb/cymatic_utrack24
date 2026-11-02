// rea decompile_all
// name: FUN_00447c70
// address: 0x447c70
// body: available
// range: 0x447c70-0x447d8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00447c70(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int iVar4;
  undefined4 in_stack_ffffffd8;
  undefined4 in_stack_ffffffdc;
  undefined4 in_stack_ffffffe0;
  
  iVar1 = *(int *)(in_ECX + 0xd4);
  iVar2 = param_1[1];
  *(int **)(iVar1 + 0x134) = param_1;
  iVar3 = 1;
  if (1 < *param_1) {
    iVar3 = *param_1;
  }
  FUN_00425f70(iVar3,iVar2,in_stack_ffffffd8,in_stack_ffffffdc,in_stack_ffffffe0);
  FUN_00425f30();
  iVar4 = 0;
  *(int *)(in_ECX + 0xd8) = param_2;
  *(undefined4 *)(in_ECX + 0xe4) = 0;
  iVar3 = param_2;
  if (0 < *(int *)(in_ECX + 0xd0)) {
    do {
      (**(code **)(**(int **)(*(int *)(in_ECX + 200) + iVar4 * 4) + 4))
                (iVar1 + 0x98,in_ECX + 0xbc,iVar2);
      iVar4 = iVar4 + 1;
      iVar3 = extraout_ECX;
    } while (iVar4 < *(int *)(in_ECX + 0xd0));
  }
  iVar4 = 0;
  if (0 < *param_1) {
    do {
      if (0 < iVar2) {
        if (*(char *)(iVar1 + 0x264) == '\0') {
          *(undefined1 *)(param_1 + 0x25) = 0;
          FUN_004c2c30(*(undefined4 *)(param_1[3] + iVar4 * 4),
                       *(undefined4 *)(*(int *)(iVar1 + 0x1dc) + iVar4 * 4),iVar2 * 8);
          iVar3 = extraout_ECX_01;
        }
        else {
          iVar3 = iVar1 + 0x1d0;
          if ((char)param_1[0x25] == '\0') {
            _memset(*(void **)(param_1[3] + iVar4 * 4),0,iVar2 * 8);
            iVar3 = extraout_ECX_00;
          }
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *param_1);
  }
  *(undefined4 *)(param_2 + 8) = 0;
  FUN_005c60f0(in_ECX + 0xdc,iVar3,param_1[1],iVar3);
  return;
}

