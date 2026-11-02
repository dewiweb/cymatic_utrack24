// rea decompile_all
// name: FUN_00481f28
// address: 0x481f28
// body: available
// range: 0x481f28-0x481fe1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00481f28(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int local_8;
  
  iVar3 = (int)param_1;
  iVar1 = *(int *)((int)param_1 + 0x14c);
  if ((*(char *)((int)param_1 + 0xb1) == '\0') && (local_8 = 0, 0 < *(int *)((int)param_1 + 0xe4)))
  {
    param_1 = (int *)((int)param_1 + 0xe8);
    do {
      iVar2 = *param_1;
      if (*(char *)(iVar3 + 0xd4) == '\0') {
        FUN_00481a81(*(undefined4 *)(iVar2 + 0x14),0);
        FUN_00481a81(*(undefined4 *)(iVar2 + 0x18),1);
      }
      else {
        if (*(int *)(iVar3 + 300) == 0) {
          if (*(int *)(iVar3 + 0x134) != 0) goto LAB_00481fa7;
          uVar5 = 0;
          uVar4 = *(undefined4 *)(iVar2 + 0x14);
        }
        else {
          uVar5 = 1;
          uVar4 = *(undefined4 *)(iVar2 + 0x18);
        }
        FUN_00481a81(uVar4,uVar5);
      }
LAB_00481fa7:
      local_8 = local_8 + 1;
      param_1 = param_1 + 1;
    } while (local_8 < *(int *)(iVar3 + 0xe4));
  }
  if (*(int *)(iVar3 + 0xbc) != *(int *)(iVar1 + 0x1c)) {
    FUN_00481b3e();
    *(int *)(iVar1 + 0x1c) = *(int *)(iVar3 + 0xbc);
  }
  FUN_00481c02();
  return;
}

