// rea decompile_all
// name: FUN_0052d020
// address: 0x52d020
// body: available
// range: 0x52d020-0x52d153 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0052d020(undefined4 param_1,int *param_2)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  int in_ECX;
  undefined1 *puVar5;
  undefined1 local_28 [19];
  char local_15;
  undefined1 local_14 [16];
  
  if (*(int *)(in_ECX + 8) != 0) {
    (**(code **)(*param_2 + 0x24))(local_14);
    puVar5 = local_28;
    (**(code **)(**(int **)(in_ECX + 8) + 0x60))(puVar5,0,local_14);
    cVar1 = FUN_00503cf0(puVar5);
    if (cVar1 != '\0') {
      (**(code **)(**(int **)(in_ECX + 8) + 0x50))();
      (**(code **)(**(int **)(in_ECX + 8) + 0x54))(local_14);
    }
    local_15 = '\x01';
    iVar3 = (**(code **)(*(int *)((int)param_2 + *(int *)(param_2[1] + 4) + 4) + 0xc))();
    if (iVar3 == 0x8201) {
      piVar4 = (int *)(**(code **)(*param_2 + 4))();
      sVar2 = (**(code **)(*piVar4 + 0x6c))();
      if (sVar2 == -3) {
        local_15 = '\x01';
      }
    }
    if (local_15 != '\0') {
      (**(code **)(*(int *)(*(int *)(in_ECX + 8) + 4 +
                           *(int *)(*(int *)(*(int *)(in_ECX + 8) + 4) + 8)) + 0x50))();
      (**(code **)(**(int **)(in_ECX + 8) + 0x6c))(param_2);
    }
  }
  return;
}

