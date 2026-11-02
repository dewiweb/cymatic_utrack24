// rea decompile_all
// name: FUN_004cf38f
// address: 0x4cf38f
// body: available
// range: 0x4cf38f-0x4cf407 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004cf38f(void)

{
  double dVar1;
  char cVar2;
  int *in_EAX;
  undefined2 extraout_var;
  uint3 uVar4;
  int iVar3;
  int *piVar5;
  
  cVar2 = FUN_004f5fe9(0);
  if (cVar2 != '\0') {
    FUN_004c15a5((float)*(double *)(in_EAX + 6));
    FUN_004c0c1f();
    if (in_EAX[1] != 0) {
      dVar1 = *(double *)(in_EAX + 6);
      uVar4 = (uint3)(CONCAT22(extraout_var,
                               (ushort)(0.0 < dVar1) << 8 | (ushort)NAN(dVar1) << 10 |
                               (ushort)(dVar1 == 0.0) << 0xe) >> 8);
      if (0.0 < dVar1) {
        iVar3 = CONCAT31(uVar4,1);
      }
      else {
        iVar3 = (uint)uVar4 << 8;
      }
      if (*in_EAX == 0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = *(int **)(*in_EAX + 8);
      }
      (**(code **)(*piVar5 + 0x28))(iVar3);
    }
  }
  return;
}

