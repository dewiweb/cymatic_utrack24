// rea decompile_all
// name: FUN_00634140
// address: 0x634140
// body: available
// range: 0x634140-0x634235 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00634140(void)

{
  int iVar1;
  undefined4 *puVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  undefined4 **ppuVar6;
  undefined4 *in_ECX;
  int *piVar7;
  int *in_EDX;
  int local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0071e95e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = in_ECX;
  cVar5 = FUN_00632d50(0x5c);
  puVar2 = (undefined4 *)*in_EDX;
  if (cVar5 == '\0') {
    piVar7 = puVar2 + -2;
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      *piVar7 = *piVar7 + 1;
      UNLOCK();
    }
    ppuVar6 = (undefined4 **)FUN_00621710(puVar2);
    bVar4 = false;
    bVar3 = true;
  }
  else {
    local_14 = puVar2;
    piVar7 = puVar2 + -2;
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      *piVar7 = *piVar7 + 1;
      UNLOCK();
    }
    ppuVar6 = &local_14;
    bVar4 = true;
    bVar3 = false;
  }
  *in_ECX = *ppuVar6;
  *ppuVar6 = (undefined4 *)&DAT_00bfe12c;
  if (bVar3) {
    piVar7 = (int *)(local_18 + -8);
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar7);
      }
    }
  }
  if ((bVar4) && (piVar7 = local_14 + -2, piVar7 != &DAT_00bfe124)) {
    LOCK();
    iVar1 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar7);
    }
  }
  ExceptionList = local_10;
  return;
}

