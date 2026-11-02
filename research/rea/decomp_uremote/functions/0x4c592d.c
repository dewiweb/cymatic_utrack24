// rea decompile_all
// name: FUN_004c592d
// address: 0x4c592d
// body: available
// range: 0x4c592d-0x4c5a2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined1 * FUN_004c592d(void)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  int in_ECX;
  undefined4 *puVar4;
  uint uVar5;
  int local_20;
  undefined4 *local_14;
  
  puVar2 = &LAB_005d8b26;
  uVar5 = *(int *)(in_ECX + 0x14) - 1;
  if (-1 < (int)uVar5) {
    do {
      puVar2 = *(undefined1 **)(in_ECX + 0xc);
      iVar1 = *(int *)(puVar2 + uVar5 * 4);
      if (*(char *)(iVar1 + 0x40) == '\0') {
        local_14 = (undefined4 *)0x0;
        if (uVar5 < *(uint *)(in_ECX + 0x14)) {
          puVar4 = (undefined4 *)(*(int *)(in_ECX + 0xc) + uVar5 * 4);
          local_14 = (undefined4 *)*puVar4;
          iVar3 = *(uint *)(in_ECX + 0x14) - 1;
          *(int *)(in_ECX + 0x14) = iVar3;
          iVar3 = iVar3 - uVar5;
          if (0 < iVar3) {
            _memmove(puVar4,puVar4 + 1,iVar3 * 4);
          }
          if ((*(int *)(in_ECX + 0x14) * 2 < *(int *)(in_ECX + 0x10)) &&
             (*(int *)(in_ECX + 0x14) < *(int *)(in_ECX + 0x10))) {
            FUN_004f8197();
          }
        }
        FUN_004f5fb6();
        iVar3 = *(int *)(iVar1 + 0x38);
        while (iVar3 = iVar3 + -1, -1 < iVar3) {
          (**(code **)(**(int **)(*(int *)(iVar1 + 0x30) + iVar3 * 4) + 4))
                    (*(undefined4 *)(iVar1 + 0x3c));
        }
        if (local_20 == 0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          puVar4 = *(undefined4 **)(local_20 + 8);
        }
        if (puVar4 != (undefined4 *)0x0) {
          (**(code **)*puVar4)(1);
        }
        puVar2 = (undefined1 *)FUN_00474d0f();
        if (local_14 != (undefined4 *)0x0) {
          puVar2 = (undefined1 *)(**(code **)*local_14)(1);
        }
      }
      uVar5 = uVar5 - 1;
    } while (-1 < (int)uVar5);
  }
  return puVar2;
}

