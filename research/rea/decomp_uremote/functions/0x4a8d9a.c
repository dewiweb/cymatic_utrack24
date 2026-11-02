// rea decompile_all
// name: FUN_004a8d9a
// address: 0x4a8d9a
// body: available
// range: 0x4a8d9a-0x4a8e27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a8d9a(undefined4 param_1)

{
  float fVar1;
  int iVar2;
  undefined1 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 extraout_ECX;
  int unaff_ESI;
  float10 fVar6;
  undefined8 uVar7;
  
  FUN_0049f5e8();
  piVar4 = (int *)FUN_0049f7d4();
  uVar3 = (**(code **)(*piVar4 + 0x24))();
  *(undefined1 *)(unaff_ESI + 0x18) = uVar3;
  *(undefined4 *)(unaff_ESI + 0x10) = param_1;
  fVar6 = (float10)FUN_0049fa3d();
  fVar1 = (float)fVar6;
  fVar6 = (float10)FUN_0049f98f(fVar1,fVar1);
  uVar7 = FUN_00477435((float)(fVar6 * (float10)fVar1));
  iVar5 = (**(code **)((int)((ulonglong)uVar7 >> 0x20) + 0x20))(extraout_ECX,(int)uVar7);
  iVar2 = *(int *)(unaff_ESI + 0xc);
  if ((iVar2 != iVar5) && (*(int *)(unaff_ESI + 0xc) = iVar5, iVar2 != 0)) {
    FUN_004f7994();
    FUN_005af7b6(iVar2);
  }
  return;
}

