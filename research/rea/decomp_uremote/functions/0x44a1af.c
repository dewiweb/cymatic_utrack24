// rea decompile_all
// name: FUN_0044a1af
// address: 0x44a1af
// body: available
// range: 0x44a1af-0x44a27b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_0044a1af(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_ESI;
  float *pfVar4;
  float fVar5;
  undefined4 uVar6;
  float local_1c;
  float local_18;
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  local_8 = 0x44a1bb;
  iVar1 = FUN_0044bfc5();
  local_18 = (float)*(int *)(iVar1 + 8);
  iVar1 = FUN_0044bfc5();
  iVar1 = *(int *)(iVar1 + 0xc);
  local_14 = FUN_005b3fb0();
  local_1c = *(float *)(unaff_ESI + 0x1c);
  iVar2 = FUN_005b3fb0();
  if (*(int *)(unaff_ESI + 0x94) == 0) {
    local_14 = -iVar1;
  }
  fVar5 = local_18 * 0.5;
  pfVar4 = &local_1c;
  local_1c = fVar5;
  FUN_0044bfc5(pfVar4,fVar5);
  FUN_0049f81a(pfVar4,fVar5);
  local_8 = 0;
  iVar3 = FUN_0049fa60(unaff_ESI + 4);
  local_8 = 0xffffffff;
  FUN_004c4d7a();
  local_14 = local_14 + iVar3 + iVar1 * 2 + iVar2;
  if ((*(uint *)(unaff_ESI + 0x94) & 0xf000) == 0) {
    local_18 = 0.0;
  }
  uVar6 = *(undefined4 *)(unaff_ESI + 0x1c);
  FUN_005b3fb0(uVar6);
  FUN_004c0be5(uVar6);
  return;
}

