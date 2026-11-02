// rea decompile_all
// name: FUN_0068b2a0
// address: 0x68b2a0
// body: available
// range: 0x68b2a0-0x68b3b0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0068b2a0(undefined4 param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  char cVar5;
  int iVar6;
  int iVar7;
  
  if ((*(byte *)(in_ECX + 0x1a) & 1) == 0) {
    cVar1 = *(char *)((int)in_ECX + 0x86);
  }
  else {
    piVar2 = (int *)FUN_006d1d80();
    if ((piVar2 == (int *)0x0) || (cVar1 = (**(code **)(*piVar2 + 0x3c))(), cVar1 == '\0')) {
      cVar1 = '\0';
    }
    else {
      cVar1 = '\x01';
    }
  }
  cVar5 = (char)param_1;
  if (cVar5 == cVar1) {
    return;
  }
  cVar1 = FUN_006e6420();
  if (((cVar1 != '\0') && (FUN_0068b060(), (*(byte *)(in_ECX + 0x1a) & 1) != 0)) &&
     (iVar3 = FUN_006d1d80(), iVar3 != 0)) {
    *(int *)(iVar3 + 0x1c) = in_ECX[0x36];
  }
  *(char *)((int)in_ECX + 0x86) = cVar5;
  if ((*(byte *)(in_ECX + 0x1a) & 1) == 0) {
    if (cVar5 == '\0') {
      iVar3 = in_ECX[0x29];
      iVar4 = in_ECX[0x28];
      iVar7 = in_ECX[0x27];
      iVar6 = in_ECX[0x26];
    }
    else {
      iVar3 = FUN_006cfab0();
      iVar4 = FUN_006cfb10(iVar3);
      iVar7 = 0;
      iVar6 = 0;
    }
  }
  else {
    piVar2 = (int *)FUN_006d1d80();
    if (piVar2 == (int *)0x0) goto LAB_0068b39e;
    iVar6 = in_ECX[0x26];
    iVar4 = in_ECX[0x28];
    iVar7 = in_ECX[0x27];
    iVar3 = in_ECX[0x29];
    (**(code **)(*piVar2 + 0x38))(param_1);
    if (((cVar5 != '\0') || (iVar4 < 1)) || (iVar3 < 1)) goto LAB_0068b39e;
  }
  FUN_006e9790(iVar6,iVar7,iVar4,iVar3);
LAB_0068b39e:
  (**(code **)(*in_ECX + 0x84))();
  return;
}

