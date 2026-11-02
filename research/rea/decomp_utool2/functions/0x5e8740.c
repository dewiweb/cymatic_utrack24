// rea decompile_all
// name: FUN_005e8740
// address: 0x5e8740
// body: available
// range: 0x5e8740-0x5e8873 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void FUN_005e8740(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  int in_EDX;
  int iVar5;
  
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  iVar3 = *(int *)(in_ECX + 4);
  iVar1 = *(int *)(iVar3 + 0x1c);
  if (in_EDX < 1) {
    if (*(int *)(in_ECX + 0x1c) == 0) {
      FUN_005e8880();
    }
    FUN_005e8980();
    *(int *)(in_ECX + 0x20) = *(int *)(in_ECX + 0x14);
    iVar5 = 0;
    *(int *)(in_ECX + 0x14) =
         *(int *)(in_ECX + 0x14) + *(int *)(iVar1 + 4) * 2 + *(int *)(iVar1 + 4);
    if (0 < *(int *)(iVar3 + 4)) {
      do {
        iVar4 = *(int *)(in_ECX + 0x20);
        if (iVar4 < 0x41) {
          _memset((void *)(*(int *)(*(int *)(in_ECX + 8) + iVar5 * 4) + iVar4 * 4),0,
                  (*(int *)(in_ECX + 0x14) - iVar4) * 4);
        }
        else {
          if (*(int *)(iVar1 + 4) < iVar4) {
            iVar4 = *(int *)(iVar1 + 4);
          }
          FUN_005e1860(iVar4,iVar4);
          iVar4 = *(int *)(in_ECX + 0x20);
          FUN_005e16f0(iVar4,*(int *)(*(int *)(in_ECX + 8) + iVar5 * 4) + iVar4 * 4,
                       *(int *)(in_ECX + 0x14) - iVar4);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(iVar3 + 4));
    }
  }
  else {
    iVar3 = *(int *)(in_ECX + 0x14) + in_EDX;
    if (*(int *)(in_ECX + 0x10) < iVar3) {
      __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
      return;
    }
    *(int *)(in_ECX + 0x14) = iVar3;
    if ((*(int *)(in_ECX + 0x1c) == 0) && (*(int *)(iVar1 + 4) < iVar3 - *(int *)(in_ECX + 0x30))) {
      FUN_005e8880();
    }
  }
  __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
  return;
}

