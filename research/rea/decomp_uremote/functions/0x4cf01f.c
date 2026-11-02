// rea decompile_all
// name: FUN_004cf01f
// address: 0x4cf01f
// body: available
// range: 0x4cf01f-0x4cf1f1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004cf01f(float param_1,undefined4 param_2,char param_3,double param_4,double param_5)

{
  undefined4 *puVar1;
  double dVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  int *in_ECX;
  int *piVar6;
  int *in_EDX;
  float10 fVar7;
  
  in_EDX[8] = 0;
  iVar4 = FUN_00439b5a();
  in_EDX[0x10] = 0;
  in_EDX[0x11] = 0;
  in_EDX[9] = iVar4;
  in_EDX[2] = *in_ECX;
  in_EDX[3] = in_ECX[1];
  in_EDX[4] = in_ECX[2];
  in_EDX[5] = in_ECX[3];
  *(double *)(in_EDX + 6) = (double)param_1;
  uVar3 = FUN_004f5c66();
  *(undefined1 *)(in_EDX + 0x1c) = uVar3;
  fVar7 = (float10)FUN_004c1582();
  *(bool *)((int)in_EDX + 0x71) = (float10)param_1 != fVar7;
  if (*in_EDX == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*in_EDX + 8);
  }
  *(double *)(in_EDX + 0x12) = (double)*(int *)(iVar4 + 0x10);
  if (*in_EDX == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*in_EDX + 8);
  }
  *(double *)(in_EDX + 0x14) = (double)*(int *)(iVar4 + 0x14);
  if (*in_EDX == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*in_EDX + 8);
  }
  *(double *)(in_EDX + 0x16) = (double)(*(int *)(iVar4 + 0x18) + *(int *)(iVar4 + 0x10));
  if (*in_EDX == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*in_EDX + 8);
  }
  *(double *)(in_EDX + 0x18) = (double)(*(int *)(iVar4 + 0x1c) + *(int *)(iVar4 + 0x14));
  fVar7 = (float10)FUN_004c1582();
  *(double *)(in_EDX + 0x1a) = (double)fVar7;
  dVar2 = 4.0 / (param_4 + param_5 + 2.0);
  fVar7 = (float10)FUN_0043a995(0,dVar2 * param_4);
  *(double *)(in_EDX + 10) = (double)fVar7;
  *(double *)(in_EDX + 0xc) = dVar2;
  fVar7 = (float10)FUN_0043a995(0,dVar2 * param_5);
  *(double *)(in_EDX + 0xe) = (double)fVar7;
  if (param_3 == '\0') {
    puVar1 = (undefined4 *)in_EDX[1];
    if ((puVar1 != (undefined4 *)0x0) && (in_EDX[1] = 0, puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)();
    }
  }
  else {
    iVar4 = FUN_005af82d();
    if (iVar4 != 0) {
      if (*in_EDX == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(*in_EDX + 8);
      }
      FUN_004cf408(iVar4,uVar5);
    }
    FUN_004f6555();
  }
  if (*in_EDX == 0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = *(int **)(*in_EDX + 8);
  }
  (**(code **)(*piVar6 + 0x28))();
  return;
}

