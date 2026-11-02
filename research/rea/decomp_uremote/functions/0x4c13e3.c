// rea decompile_all
// name: FUN_004c13e3
// address: 0x4c13e3
// body: available
// range: 0x4c13e3-0x4c1459 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined1 * FUN_004c13e3(undefined4 param_1)

{
  char cVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int in_ECX;
  undefined4 uVar5;
  
  puVar2 = &LAB_005de19f;
  if ((*(byte *)(in_ECX + 0x69) & 0x10) != 0) {
    uVar3 = FUN_00473bb8();
    cVar1 = FUN_00473e0a(uVar3);
    if (cVar1 == '\0') {
      iVar4 = FUN_005af82d(0x10);
      if (iVar4 != 0) {
        FUN_004c145a(iVar4,param_1);
      }
      puVar2 = (undefined1 *)FUN_00473c1d();
    }
    else {
      iVar4 = in_ECX;
      FUN_004bf254();
      FUN_004c58b2(iVar4,param_1);
      *(byte *)(in_ECX + 0x69) = *(byte *)(in_ECX + 0x69) & 0xef;
      uVar5 = 1;
      uVar3 = FUN_004bf254(1);
      puVar2 = (undefined1 *)FUN_004c5a2c(uVar3,uVar5);
    }
  }
  return puVar2;
}

