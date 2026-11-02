// rea decompile_all
// name: FUN_004c4ad4
// address: 0x4c4ad4
// body: available
// range: 0x4c4ad4-0x4c4b92 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004c4ad4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  int in_ECX;
  uint uVar4;
  
  iVar1 = FUN_005af82d(0xb0);
  if (iVar1 == 0) {
    param_2 = 0;
  }
  else {
    param_2 = FUN_004c346a(iVar1,param_1,param_2);
  }
  iVar1 = *(int *)(in_ECX + 0x1c) + 1;
  if (((int)*(uint *)(in_ECX + 0x18) < iVar1) &&
     (uVar4 = iVar1 / 2 + 8 + iVar1 & 0xfffffff8, *(uint *)(in_ECX + 0x18) != uVar4)) {
    if ((int)uVar4 < 1) {
      _free(*(void **)(in_ECX + 0x14));
      *(undefined4 *)(in_ECX + 0x14) = 0;
    }
    else {
      if (*(void **)(in_ECX + 0x14) == (void *)0x0) {
        pvVar2 = _malloc(uVar4 << 2);
      }
      else {
        pvVar2 = _realloc(*(void **)(in_ECX + 0x14),uVar4 << 2);
      }
      *(void **)(in_ECX + 0x14) = pvVar2;
    }
    *(uint *)(in_ECX + 0x18) = uVar4;
  }
  iVar1 = *(int *)(in_ECX + 0x1c);
  *(int *)(in_ECX + 0x1c) = iVar1 + 1;
  *(undefined4 *)(*(int *)(in_ECX + 0x14) + iVar1 * 4) = param_2;
  uVar3 = FUN_004c751a();
  FUN_004f6965(uVar3);
  return;
}

