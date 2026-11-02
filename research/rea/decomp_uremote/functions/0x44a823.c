// rea decompile_all
// name: FUN_0044a823
// address: 0x44a823
// body: available
// range: 0x44a823-0x44a8ea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_0044a823(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int in_ECX;
  
  iVar2 = *(int *)(*(int *)(in_ECX + 8) + 0x7c);
  FUN_004c11fc();
  FUN_0045ef8e();
  for (uVar3 = 0; uVar1 = *(uint *)(iVar2 + 0x27c), (int)uVar3 < (int)uVar1; uVar3 = uVar3 + 1) {
    if (uVar3 < uVar1) {
      iVar4 = *(int *)(*(int *)(iVar2 + 0x274) + uVar3 * 4);
    }
    else {
      iVar4 = 0;
    }
    if (iVar4 != 0) {
      iVar4 = FUN_005af82d(0x198);
      if (iVar4 != 0) {
        FUN_0044b9b6(iVar4,*(undefined4 *)(in_ECX + 8));
      }
      FUN_004401f3(*(int *)(in_ECX + 8) + 0x605c);
      FUN_004c1064(0xffffffff);
    }
  }
  FUN_0045efa9();
  (**(code **)(*(int *)(in_ECX + -0x70) + 0x84))();
  return;
}

