// rea decompile_all
// name: FUN_00690820
// address: 0x690820
// body: available
// range: 0x690820-0x6908ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00690820(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  char cVar3;
  code *pcVar4;
  int in_ECX;
  undefined4 in_stack_ffffffd0;
  undefined4 in_stack_ffffffd4;
  undefined1 local_18 [8];
  int *local_10;
  int local_c;
  
  cVar3 = FUN_006ac180(*(undefined4 *)(param_2 + 0x14),*(undefined4 *)(param_2 + 0x18),
                       in_stack_ffffffd0,in_stack_ffffffd4);
  FUN_004a4100(in_ECX,param_1,param_2);
  if (local_10 != (int *)0x0) {
    if ((((cVar3 == '\0') && (iVar1 = *(int *)(in_ECX + 0xa0), iVar1 != 0)) &&
        (*(int **)(iVar1 + 0x70) == local_10)) && (*(int *)(iVar1 + 0x74) == local_c)) {
      return;
    }
    if (*(int *)(param_1 + 8) < 1) {
      pcVar4 = *(code **)(*local_10 + 0x50);
    }
    else {
      pcVar4 = *(code **)(*local_10 + 0x48);
      param_2 = param_1;
      if (pcVar4 == FUN_006dfa00) goto LAB_006908b3;
    }
    cVar3 = (*pcVar4)(param_2);
    if (cVar3 != '\0') {
      FUN_00690930(local_18);
      return;
    }
  }
LAB_006908b3:
  puVar2 = *(undefined4 **)(in_ECX + 0xa0);
  if (puVar2 != (undefined4 *)0x0) {
    *(undefined4 *)(in_ECX + 0xa0) = 0;
    (**(code **)*puVar2)(1);
  }
  puVar2 = *(undefined4 **)(in_ECX + 0xa4);
  if (puVar2 != (undefined4 *)0x0) {
    *(undefined4 *)(in_ECX + 0xa4) = 0;
    (**(code **)*puVar2)(1);
  }
  return;
}

