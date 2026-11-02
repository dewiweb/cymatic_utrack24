// rea decompile_all
// name: FUN_0068b540
// address: 0x68b540
// body: available
// range: 0x68b540-0x68b5f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0068b540(undefined4 param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int *in_ECX;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined1 auStack_1c [4];
  undefined1 local_18 [20];
  
  puStack_2c = (undefined1 *)0x68b553;
  iVar3 = FUN_006e9580();
  puStack_2c = local_18;
  puStack_30 = (undefined1 *)0x68b564;
  uVar4 = (**(code **)(*in_ECX + 0xb8))();
  puStack_30 = *(undefined1 **)(iVar3 + 0x30);
  if (*(code **)(puStack_30 + 0xc) == FUN_006da6e0) {
    FUN_0068b4a0(&puStack_30);
    FUN_00684a80();
  }
  else {
    (**(code **)(puStack_30 + 0xc))(param_1,in_ECX[6],in_ECX[7],uVar4);
  }
  if ((*(byte *)(in_ECX + 0x1a) & 1) == 0) {
    cVar2 = *(char *)((int)in_ECX + 0x86);
  }
  else {
    puStack_30 = (undefined1 *)0x68b592;
    piVar5 = (int *)FUN_006d1d80();
    if (piVar5 == (int *)0x0) goto LAB_0068b5ab;
    puStack_30 = (undefined1 *)0x68b59f;
    cVar2 = (**(code **)(*piVar5 + 0x3c))();
  }
  if (cVar2 != '\0') {
    return;
  }
LAB_0068b5ab:
  puStack_30 = auStack_1c;
  uVar4 = (**(code **)(*in_ECX + 0xb8))();
  pcVar1 = *(code **)(*(int *)(iVar3 + 0x30) + 0x10);
  if (pcVar1 != FUN_006da6d0) {
    (*pcVar1)(param_1,in_ECX[6],in_ECX[7],uVar4);
  }
  return;
}

