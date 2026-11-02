// rea decompile_all
// name: FUN_0050d360
// address: 0x50d360
// body: available
// range: 0x50d360-0x50d493 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0050d360(void)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  int *_Memory;
  bool bVar4;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00708751;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(char *)(in_ECX + 0x24) == '\0') {
    uVar3 = 0;
    *(undefined1 *)(in_ECX + 0x23) = 0;
    if (0 < *(int *)(in_ECX + 0x10dc)) {
      bVar4 = *(int *)(in_ECX + 0x10dc) != 0;
      do {
        if (bVar4) {
          iVar2 = *(int *)(*(int *)(in_ECX + 0x10d4) + uVar3 * 4);
        }
        else {
          iVar2 = 0;
        }
        if (*(char *)(*(int *)(iVar2 + 0xc) + 0x54) != '\0') {
          *(undefined1 *)(in_ECX + 0x23) = 1;
          break;
        }
        uVar3 = uVar3 + 1;
        bVar4 = uVar3 < *(uint *)(in_ECX + 0x10dc);
      } while ((int)uVar3 < (int)*(uint *)(in_ECX + 0x10dc));
    }
  }
  if (((*(char *)(in_ECX + 0x23) == '\0') && (*(char *)(in_ECX + 0x24) == '\0')) &&
     (*(double *)(in_ECX + 0x14) != 0.0)) {
    local_14 = in_ECX;
    FUN_0050e370(1);
    FUN_004124f0(uVar1);
    FUN_005b5190();
    local_8 = 0;
    if (*(int *)(in_ECX + 0x614) != 0) {
      FUN_006e0e10(1);
    }
    FUN_006e4900(&local_14,0);
    FUN_006e5380(0,0);
    _Memory = (int *)(local_14 + -8);
    if (_Memory != &DAT_00bfe124) {
      LOCK();
      iVar2 = *_Memory;
      *_Memory = *_Memory + -1;
      UNLOCK();
      if (iVar2 == 0) {
        FID_conflict__free(_Memory);
      }
    }
  }
  ExceptionList = local_10;
  return;
}

