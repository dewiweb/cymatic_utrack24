// rea decompile_all
// name: FUN_006e9790
// address: 0x6e9790
// body: available
// range: 0x6e9790-0x6e98ce inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006e9790(uint param_1,uint param_2,int param_3,int param_4)

{
  char cVar1;
  int *piVar2;
  int in_ECX;
  int iVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  undefined1 auStack_34 [4];
  undefined4 uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  iVar3 = 0;
  if (-1 < param_3) {
    iVar3 = param_3;
  }
  iVar6 = 0;
  if (-1 < param_4) {
    iVar6 = param_4;
  }
  if ((*(int *)(in_ECX + 0x18) == iVar3) && (*(int *)(in_ECX + 0x1c) == iVar6)) {
    cVar4 = '\0';
  }
  else {
    cVar4 = '\x01';
  }
  if ((*(int *)(in_ECX + 0x10) == param_1) && (*(int *)(in_ECX + 0x14) == param_2)) {
    bVar5 = 0;
    if (cVar4 == '\0') {
      return;
    }
  }
  else {
    bVar5 = 1;
  }
  uStack_28 = 0x6e97e7;
  cVar1 = FUN_006e6420();
  if (cVar1 != '\0') {
    uStack_28 = 0x6e97f3;
    FUN_006ccc80();
    if ((*(byte *)(in_ECX + 0x68) & 1) == 0) {
      uStack_28 = 0x6e9800;
      FUN_006ceba0();
    }
  }
  *(uint *)(in_ECX + 0x10) = param_1;
  *(uint *)(in_ECX + 0x14) = param_2;
  *(int *)(in_ECX + 0x18) = iVar3;
  *(int *)(in_ECX + 0x1c) = iVar6;
  if (cVar1 == '\0') {
    if (*(int **)(in_ECX + 0x40) != (int *)0x0) {
      uStack_28 = 0x6e9850;
      (**(code **)(**(int **)(in_ECX + 0x40) + 8))();
    }
  }
  else if (cVar4 == '\0') {
    if ((*(byte *)(in_ECX + 0x68) & 1) == 0) {
      uStack_28 = 0x6e9842;
      FUN_006ceba0();
    }
  }
  else {
    FUN_006e6400(auStack_34);
    FUN_006ce9f0(1);
  }
  *(byte *)(in_ECX + 0x6a) = *(byte *)(in_ECX + 0x6a) & 0xfc | bVar5 | cVar4 * '\x02';
  if ((*(byte *)(in_ECX + 0x68) & 1) != 0) {
    uStack_28 = 0x6e986d;
    piVar2 = (int *)FUN_006d1d80();
    if (piVar2 != (int *)0x0) {
      FUN_006cdec0(auStack_34);
      uStack_2c = FUN_004b21a0();
      uStack_28 = 0;
      uStack_30 = 0x6e9897;
      (**(code **)(*piVar2 + 0x18))();
    }
  }
  bVar5 = *(byte *)(in_ECX + 0x6a);
  param_2 = CONCAT31(param_2._1_3_,bVar5) & 0xffffff01;
  param_1 = CONCAT31(param_1._1_3_,bVar5 >> 1) & 0xffffff01;
  if (((bVar5 & 1) != 0) || ((bVar5 >> 1 & 1) != 0)) {
    uStack_28 = param_1;
    uStack_2c = param_2;
    *(byte *)(in_ECX + 0x6a) = bVar5 & 0xfc;
    uStack_30 = 0x6e98c6;
    FUN_006cf760();
  }
  return;
}

