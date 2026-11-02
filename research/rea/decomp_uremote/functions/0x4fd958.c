// rea decompile_all
// name: FUN_004fd958
// address: 0x4fd958
// body: available
// range: 0x4fd958-0x4fda74 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004fd958(int *param_1,char param_2)

{
  double dVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  undefined1 local_38 [52];
  
  iVar4 = FUN_004c0453();
  if (iVar4 != 0) {
    thunk_FUN_004c1265();
    piVar5 = (int *)FUN_004c0848();
    param_1[0x1c] = *piVar5;
    param_1[0x1d] = piVar5[1];
    param_1[0x1e] = piVar5[2];
    param_1[0x1f] = piVar5[3];
    FUN_004c4e62();
    iVar6 = FUN_004c53da();
    dVar1 = *(double *)(iVar6 + 0x20);
    uVar2 = *(undefined4 *)(iVar4 + 4);
    iVar4 = param_1[0x12];
    FUN_004c2047(local_38);
    FUN_004c092e(uVar2,iVar4);
    FUN_004f5aa9();
    FUN_004f8ef7();
    if ((dVar1 != *(double *)(param_1 + 0x20)) || (cVar3 = FUN_004f5c66(), cVar3 != '\0')) {
      *(double *)(param_1 + 0x20) = dVar1;
      param_1[0x18] = local_48;
      param_1[0x19] = local_44;
      param_1[0x1a] = local_40;
      param_1[0x1b] = local_3c;
      if (param_2 != '\0') {
        (**(code **)(*param_1 + 8))();
      }
    }
  }
  return;
}

