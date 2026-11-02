// rea decompile_all
// name: FUN_004c2c26
// address: 0x4c2c26
// body: available
// range: 0x4c2c26-0x4c2cbe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004c2c26(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *in_ECX;
  undefined8 uVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined1 local_14 [12];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x4c2c32;
  if ((*(byte *)(in_ECX + 0x1a) & 1) != 0) {
    piVar5 = in_ECX;
    FUN_004c4e62();
    FUN_004c4fee(piVar5);
  }
  FUN_004c3456();
  local_8 = 0;
  (**(code **)(*in_ECX + 0x94))();
  cVar1 = FUN_004c3462();
  if (cVar1 == '\0') {
    FUN_004f8791(local_14,FUN_004f9c53,in_ECX);
    cVar1 = FUN_004c3462();
    if ((cVar1 == '\0') && (iVar2 = FUN_004c1514(), iVar2 != 0)) {
      thunk_FUN_004c1265();
      uVar4 = thunk_FUN_004c1265();
      if ((int)((ulonglong)uVar4 >> 0x20) != (int)uVar4) {
        uVar6 = 0;
        uVar3 = FUN_004bf254(0);
        FUN_004c5a2c(uVar3,uVar6);
      }
    }
  }
  FUN_00474d0f();
  return;
}

