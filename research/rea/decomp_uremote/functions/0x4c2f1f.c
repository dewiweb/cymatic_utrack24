// rea decompile_all
// name: FUN_004c2f1f
// address: 0x4c2f1f
// body: available
// range: 0x4c2f1f-0x4c301d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x004c3001) */

void FUN_004c2f1f(undefined4 param_1,char param_2)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int *in_ECX;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_005de7ba;
  local_14 = ExceptionList;
  uVar2 = DAT_00955fd4 ^ (uint)&stack0xffffffd8;
  ExceptionList = &local_14;
  cVar1 = FUN_004c016b(uVar2);
  if (cVar1 != '\0') {
    if (((*(byte *)(in_ECX + 0x1a) & 0x20) == 0) ||
       ((cVar1 = FUN_004c3153(), cVar1 == '\0' && (in_ECX[3] != 0)))) {
      cVar1 = thunk_FUN_004c1278(in_ECX);
      if ((cVar1 == '\0') || (cVar1 = FUN_004c016b(uVar2), cVar1 == '\0')) {
        piVar3 = (int *)(**(code **)(*in_ECX + 0x50))();
        uStack_c = 0;
        if (piVar3 != (int *)0x0) {
          iVar4 = (**(code **)(*piVar3 + 0xc))();
          if (piVar3 != (int *)0x0) {
            (**(code **)*piVar3)(1);
          }
          if (iVar4 != 0) {
            FUN_004c2f1f(param_1,0);
            ExceptionList = local_14;
            return;
          }
        }
        if ((param_2 != '\0') && (in_ECX[3] != 0)) {
          FUN_004c2f1f(param_1,1);
        }
      }
    }
    else {
      FUN_004c2e5b(in_ECX,param_1);
    }
  }
  ExceptionList = local_14;
  return;
}

