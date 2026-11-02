// rea decompile_all
// name: FUN_0050b1c0
// address: 0x50b1c0
// body: available
// range: 0x50b1c0-0x50b370 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0050b1c0(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  char cVar2;
  bool bVar3;
  float fVar4;
  undefined4 local_10;
  
  bVar3 = (char)param_1 == '\0';
  *(bool *)(in_ECX + 0x7b8) = bVar3;
  if (bVar3) {
    fVar4 = 0.2;
  }
  else {
    fVar4 = 1.0;
  }
  local_10 = SUB84((double)fVar4 * 255.0 + 6755399441055744.0,0);
  if (local_10 < 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = local_10;
    if (0xff < local_10) {
      iVar1 = 0xff;
    }
  }
  cVar2 = -1 - (char)iVar1;
  if (*(char *)(in_ECX + 0x654) != cVar2) {
    *(char *)(in_ECX + 0x654) = cVar2;
    (**(code **)(*(int *)(in_ECX + 0x5e8) + 0x58))();
  }
  if (local_10 < 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = local_10;
    if (0xff < local_10) {
      iVar1 = 0xff;
    }
  }
  cVar2 = -1 - (char)iVar1;
  if (*(char *)(in_ECX + 0xec) != cVar2) {
    *(char *)(in_ECX + 0xec) = cVar2;
    (**(code **)(*(int *)(in_ECX + 0x80) + 0x58))();
  }
  FUN_0050aa30(param_1);
  if (local_10 < 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = local_10;
    if (0xff < local_10) {
      iVar1 = 0xff;
    }
  }
  cVar2 = -1 - (char)iVar1;
  if (*(char *)(in_ECX + 0x424) != cVar2) {
    *(char *)(in_ECX + 0x424) = cVar2;
    (**(code **)(*(int *)(in_ECX + 0x3b8) + 0x58))();
  }
  if (local_10 < 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = local_10;
    if (0xff < local_10) {
      iVar1 = 0xff;
    }
  }
  cVar2 = -1 - (char)iVar1;
  if (*(char *)(in_ECX + 0x53c) != cVar2) {
    *(char *)(in_ECX + 0x53c) = cVar2;
    (**(code **)(*(int *)(in_ECX + 0x4d0) + 0x58))();
  }
  if (local_10 < 0) {
    local_10 = 0;
  }
  else if (0xff < local_10) {
    local_10 = 0xff;
  }
  cVar2 = -1 - (char)local_10;
  if (*(char *)(in_ECX + 0x6d8) != cVar2) {
    *(char *)(in_ECX + 0x6d8) = cVar2;
    (**(code **)(*(int *)(in_ECX + 0x66c) + 0x58))();
  }
  *(byte *)(in_ECX + 0x68) =
       -(*(char *)(in_ECX + 0x7b8) != '\0') & 8U | *(byte *)(in_ECX + 0x68) & 0xe7 |
       (*(char *)(in_ECX + 0x7b8) != '\0') - 1U & 0x10;
  return;
}

