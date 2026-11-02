// rea decompile_all
// name: FUN_00446720
// address: 0x446720
// body: available
// range: 0x446720-0x44688a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00446836) */
/* WARNING: Removing unreachable block (ram,0x00446847) */
/* WARNING: Removing unreachable block (ram,0x00446854) */
/* WARNING: Removing unreachable block (ram,0x0044685d) */

void FUN_00446720(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int *in_ECX;
  int *piVar4;
  int iVar5;
  int local_38;
  void *local_10;
  undefined1 *puStack_c;
  char local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_006fef30;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = '\0';
  uStack_7 = 0;
  FUN_0062da40(uVar2);
  cVar1 = FUN_00415460(in_ECX);
  if (cVar1 == '\0') {
    iVar5 = 0;
    do {
      FUN_00634690();
      local_8 = '\x01';
      if (((*in_ECX == local_38) || (iVar3 = FUN_0045c1e0(*in_ECX,local_38), iVar3 == 0)) ||
         (cVar1 = FUN_00635500(in_ECX), cVar1 != '\0')) {
        piVar4 = (int *)(local_38 + -8);
        if (piVar4 != &DAT_00bfe124) {
          LOCK();
          iVar5 = *piVar4;
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (iVar5 == 0) {
            FID_conflict__free(piVar4);
          }
        }
        break;
      }
      piVar4 = (int *)(local_38 + -8);
      local_8 = cVar1;
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar4);
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 8);
  }
  FID_conflict__free((void *)0x0);
  ExceptionList = local_10;
  __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
  return;
}

