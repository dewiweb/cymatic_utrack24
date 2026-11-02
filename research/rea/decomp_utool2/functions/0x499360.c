// rea decompile_all
// name: FUN_00499360
// address: 0x499360
// body: available
// range: 0x499360-0x49947c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00499360(uint param_1,char param_2,char param_3,char param_4,undefined4 param_5,
                 undefined4 param_6)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  byte *pbVar4;
  int in_ECX;
  
  if (*(char *)(*(int *)(in_ECX + 0x14) + 0xc4) == '\0') {
LAB_00499390:
    uVar2 = 0;
  }
  else {
    if (((byte)DAT_00c8a9c8 & 0x70) == 0) {
      pbVar4 = (byte *)FUN_00687140();
      if ((*pbVar4 & 0x70) == 0) goto LAB_00499390;
    }
    uVar2 = 1;
  }
  *(undefined1 *)(in_ECX + 0x38) = uVar2;
  cVar3 = FUN_00497ec0();
  if (cVar3 == '\0') {
    if (*(int *)(*(int *)(in_ECX + 0x14) + 0xf0) + 10U < param_1) {
      DAT_00c8a5e2 = 1;
      if (*(int *)(*(int *)(in_ECX + 0x14) + 0x70) != 0) {
        FUN_004974d0(0);
        return;
      }
LAB_0049945f:
      FUN_004973b0(0,0);
      return;
    }
  }
  else if ((((param_2 == '\0') || (param_1 <= *(int *)(*(int *)(in_ECX + 0x14) + 0xec) + 0xfaU)) ||
           (*(char *)(in_ECX + 0x38) != '\0')) || (param_3 != '\0')) {
    *(uint *)(*(int *)(in_ECX + 0x14) + 0xf0) = param_1;
  }
  else {
    cVar3 = FUN_006d01e0(param_5,param_6,1);
    iVar1 = *(int *)(in_ECX + 0x14);
    if (cVar3 != '\0') {
      FUN_00498e60();
      return;
    }
    if (((*(char *)(iVar1 + 0xc4) != '\0') || (*(char *)(iVar1 + 0xc6) == '\0')) &&
       (param_4 == '\0')) {
      if (*(int *)(iVar1 + 0x70) != 0) {
        FUN_004974d0(0);
        return;
      }
      goto LAB_0049945f;
    }
  }
  return;
}

