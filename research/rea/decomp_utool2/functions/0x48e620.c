// rea decompile_all
// name: FUN_0048e620
// address: 0x48e620
// body: available
// range: 0x48e620-0x48e7bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_0048e620(uint param_1,float param_2,float param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int in_ECX;
  uint uVar4;
  
  if (*(uint *)(in_ECX + 0x20) != param_1) {
    if (((*(uint *)(in_ECX + 0x20) & 0x70) == 0) || ((param_1 & 0x70) != 0)) {
      FUN_0048eaf0(param_2,param_3,param_4);
    }
    uVar2 = DAT_00c8a9c8;
    uVar4 = *(uint *)(in_ECX + 0x20) & 0x70;
    if ((uVar4 != 0) != ((param_1 & 0x70) != 0)) {
      iVar1 = *(int *)(in_ECX + 0x3c);
      if (uVar4 != 0) {
        if (*(int *)(in_ECX + 0x2c) == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(*(int *)(in_ECX + 0x2c) + 8);
        }
        if (iVar3 != 0) {
          uVar4 = *(uint *)(in_ECX + 0x20);
          *(uint *)(in_ECX + 0x20) = param_1;
          FUN_0048e580(iVar3,uVar4 | uVar2 & 0xffffff8f,*(float *)(in_ECX + 0x18) + param_2,
                       *(float *)(in_ECX + 0x1c) + param_3);
          if (iVar1 != *(int *)(in_ECX + 0x3c)) {
            return true;
          }
        }
        FUN_0048f340();
      }
      *(uint *)(in_ECX + 0x20) = param_1;
      if ((param_1 & 0x70) != 0) {
        iVar3 = FUN_006e5f70();
        *(int *)(iVar3 + 0x60) = *(int *)(iVar3 + 0x60) + 1;
        if (*(int *)(in_ECX + 0x2c) == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(*(int *)(in_ECX + 0x2c) + 8);
        }
        if (iVar3 != 0) {
          FUN_0048f800(iVar3,*(undefined4 *)(in_ECX + 0x20),param_2,param_3);
          FUN_0048e440(iVar3,param_2,param_3);
        }
      }
      return iVar1 != *(int *)(in_ECX + 0x3c);
    }
    *(uint *)(in_ECX + 0x20) = param_1;
  }
  return false;
}

