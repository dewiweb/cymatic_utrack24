// rea decompile_all
// name: FUN_0053d260
// address: 0x53d260
// body: available
// range: 0x53d260-0x53d3d6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0053d39e) */
/* WARNING: Removing unreachable block (ram,0x0053d3a8) */
/* WARNING: Removing unreachable block (ram,0x0053d33c) */
/* WARNING: Removing unreachable block (ram,0x0053d353) */

int FUN_0053d260(void)

{
  undefined *puVar1;
  undefined4 *puVar2;
  DWORD DVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 *in_ECX;
  undefined4 in_EDX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070e189;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(char *)*in_ECX != '\0') {
    puVar2 = (undefined4 *)FUN_00458890();
    DVar3 = GetFileAttributesW((LPCWSTR)*puVar2);
    if ((DVar3 & 0x10) == 0) {
      operator_new(0x80);
      local_8 = 0;
      iVar4 = FUN_0053dea0(in_ECX,in_EDX);
      if (*(int *)(iVar4 + 0x5c) == 0) {
        ExceptionList = local_10;
        return iVar4;
      }
      puVar1 = *(undefined **)(iVar4 + 0x60);
      piVar5 = (int *)(puVar1 + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        *piVar5 = *piVar5 + 1;
        UNLOCK();
      }
      local_8 = 2;
      if ((puVar1 != PTR_DAT_00c7ed54) && (iVar6 = FUN_0045c1e0(puVar1), iVar6 != 0)) {
        FUN_005b2f20();
      }
      piVar5 = (int *)(puVar1 + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar6 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          FID_conflict__free(piVar5);
        }
      }
      ExceptionList = local_10;
      return iVar4;
    }
  }
  ExceptionList = local_10;
  return 0;
}

