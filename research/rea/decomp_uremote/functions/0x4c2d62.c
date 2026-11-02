// rea decompile_all
// name: FUN_004c2d62
// address: 0x4c2d62
// body: available
// range: 0x4c2d62-0x4c2ddb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_004c2d62(undefined4 param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  int *in_ECX;
  int **ppiVar5;
  int *piStack_28;
  undefined4 uStack_24;
  undefined1 auStack_20 [24];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  local_8 = 0x4c2d6e;
  uStack_24 = 1;
  piStack_28 = in_ECX;
  bVar2 = FUN_004c30fb();
  ppiVar5 = (int **)auStack_20;
  bVar1 = *(byte *)((int)in_ECX + 0x69);
  if ((bVar1 >> 6 & 1) != bVar2) {
    uStack_24 = param_1;
    *(byte *)((int)in_ECX + 0x69) = (bVar2 << 6 ^ bVar1) & 0x40 ^ bVar1;
    ppiVar5 = &piStack_28;
    piStack_28 = (int *)0x4c2da0;
    (**(code **)(*in_ECX + 0x80))();
    ppiVar5[-1] = (int *)0x0;
    ppiVar5[-2] = (int *)0x4c2daa;
    cVar3 = FUN_004f5fce();
    if (cVar3 != '\0') goto LAB_004c2dd4;
  }
  if (in_ECX[3] != 0) {
    *(undefined4 *)((int)ppiVar5 + -4) = 0x4c2dbd;
    uVar4 = FUN_004f5fb6();
    local_8 = 0;
    *(undefined4 *)((int)ppiVar5 + -4) = uVar4;
    *(undefined4 *)((int)ppiVar5 + -8) = param_1;
    *(undefined4 *)((int)ppiVar5 + -0xc) = 0x4c2dcd;
    FUN_004c2d62();
    *(undefined4 *)((int)ppiVar5 + -4) = 0x4c2dd4;
    FUN_00474d0f();
  }
LAB_004c2dd4:
  *(undefined4 *)((int)ppiVar5 + -4) = 0x4c2dd9;
  return;
}

