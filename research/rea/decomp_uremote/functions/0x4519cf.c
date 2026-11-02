// rea decompile_all
// name: thunk_FUN_004bfe57
// address: 0x4519cf
// body: available
// range: 0x4519cf-0x4519d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void thunk_FUN_004bfe57(void)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 *in_ECX;
  undefined4 *extraout_ECX;
  int iVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  *in_ECX = juce::Component::vftable;
  iVar3 = in_ECX[0x15];
  while (0 < iVar3) {
    iVar3 = iVar3 + -1;
    if (((int)in_ECX[0x15] <= iVar3) && (iVar3 = in_ECX[0x15] + -1, iVar3 < 0)) break;
    FUN_004f9d8b();
  }
  if (in_ECX[0x19] != 0) {
    *(undefined4 *)(in_ECX[0x19] + 8) = 0;
  }
  iVar3 = in_ECX[0xc];
  while (0 < iVar3) {
    FUN_004c10a9(in_ECX,0,1);
    iVar3 = in_ECX[0xc];
  }
  iVar3 = in_ECX[3];
  if (iVar3 == 0) {
    bVar4 = DAT_0095d698 == in_ECX;
    if (!bVar4) {
      cVar2 = thunk_FUN_004c1278(in_ECX);
      if (cVar2 == '\0') goto LAB_004bff0e;
      bVar4 = extraout_ECX == in_ECX;
    }
    FUN_004c312a(!bVar4);
  }
  else {
    uVar6 = 0;
    uVar5 = 1;
    FUN_00472d86(in_ECX);
    FUN_004c10a9(iVar3,uVar5,uVar6);
  }
LAB_004bff0e:
  if ((*(byte *)(in_ECX + 0x1a) & 1) != 0) {
    FUN_004c041e();
  }
  FUN_00474d0f();
  FUN_00460b5e();
  _free((void *)in_ECX[0x13]);
  puVar1 = (undefined4 *)in_ECX[0x12];
  if (puVar1 != (undefined4 *)0x0) {
    _free((void *)*puVar1);
    FUN_005af7b6(puVar1);
  }
  puVar1 = (undefined4 *)in_ECX[0x11];
  if (puVar1 != (undefined4 *)0x0) {
    _free((void *)*puVar1);
    FUN_005af7b6(puVar1);
  }
  if ((undefined4 *)in_ECX[0x10] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x10])(1);
  }
  FUN_004c6b17();
  _free((void *)in_ECX[10]);
  FUN_005af7b6(in_ECX[9]);
  if ((undefined4 *)in_ECX[8] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[8])(1);
  }
  FUN_004652d6();
  FUN_004652d6();
  *in_ECX = juce::MouseListener::vftable;
  return;
}

