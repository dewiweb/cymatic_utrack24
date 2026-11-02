// rea decompile_all
// name: FUN_006e6420
// address: 0x6e6420
// body: available
// range: 0x6e6420-0x6e64d2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x006e6473) */

void FUN_006e6420(void)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  WINDOWPLACEMENT local_38;
  uint local_c;
  
  local_c = DAT_00c76070 ^ (uint)&local_38;
  bVar1 = *(byte *)(in_ECX + 0x68);
  do {
    if ((bVar1 & 2) == 0) {
LAB_006e644f:
      __security_check_cookie(local_c ^ (uint)&local_38);
      return;
    }
    iVar2 = *(int *)(in_ECX + 0xc);
    if (iVar2 == 0) {
      if (((*(byte *)(in_ECX + 0x68) & 1) != 0) &&
         (piVar3 = (int *)FUN_0068db10(), piVar3 != (int *)0x0)) {
        if ((undefined **)*piVar3 != juce::HWNDComponentPeer::vftable) {
          (*(code *)((undefined **)*piVar3)[0xd])();
          __security_check_cookie(local_c ^ (uint)&local_38);
          return;
        }
        local_38.length = 0x2c;
        GetWindowPlacement((HWND)piVar3[0xe],&local_38);
        __security_check_cookie(local_c ^ (uint)&local_38);
        return;
      }
      goto LAB_006e644f;
    }
    bVar1 = *(byte *)(iVar2 + 0x68);
    in_ECX = iVar2;
  } while( true );
}

