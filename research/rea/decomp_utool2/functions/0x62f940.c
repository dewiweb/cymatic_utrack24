// rea decompile_all
// name: FUN_0062f940
// address: 0x62f940
// body: available
// range: 0x62f940-0x62fa05 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0062f940(void)

{
  uint uVar1;
  undefined1 auVar2 [16];
  double dVar3;
  int in_ECX;
  int iVar4;
  LARGE_INTEGER in_XMM0_Qa;
  double dVar5;
  LARGE_INTEGER local_10;
  
  QueryPerformanceCounter(&local_10);
  FUN_006f5730();
  local_10 = in_XMM0_Qa;
  FUN_006f5730();
  dVar3 = local_10.QuadPart / in_XMM0_Qa.QuadPart;
  uVar1 = *(uint *)(in_ECX + 0x28);
  if (uVar1 == 0 && *(int *)(in_ECX + 0x2c) == 0) {
    auVar2._8_4_ = SUB84(dVar3,0);
    auVar2._0_8_ = dVar3;
    auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    *(undefined1 (*) [16])(in_ECX + 0x10) = auVar2;
  }
  else {
    dVar5 = dVar3;
    if (dVar3 <= *(double *)(in_ECX + 0x10)) {
      dVar5 = *(double *)(in_ECX + 0x10);
    }
    *(double *)(in_ECX + 0x10) = dVar5;
    dVar5 = dVar3;
    if (*(double *)(in_ECX + 0x18) <= dVar3) {
      dVar5 = *(double *)(in_ECX + 0x18);
    }
    *(double *)(in_ECX + 0x18) = dVar5;
  }
  *(uint *)(in_ECX + 0x28) = uVar1 + 1;
  iVar4 = *(int *)(in_ECX + 0x2c) + (uint)(0xfffffffe < uVar1);
  *(int *)(in_ECX + 0x2c) = iVar4;
  *(double *)(in_ECX + 0x20) = *(double *)(in_ECX + 0x20) + dVar3;
  if ((iVar4 <= *(int *)(in_ECX + 0x34)) &&
     ((iVar4 < *(int *)(in_ECX + 0x34) || (uVar1 + 1 < *(uint *)(in_ECX + 0x30))))) {
    return 0;
  }
  FUN_0062f880();
  return 1;
}

