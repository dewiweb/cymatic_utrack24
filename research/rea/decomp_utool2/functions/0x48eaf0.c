// rea decompile_all
// name: FUN_0048eaf0
// address: 0x48eaf0
// body: available
// range: 0x48eaf0-0x48ec8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048eaf0(float param_1,float param_2,undefined4 param_3,undefined4 param_4,char param_5)

{
  undefined4 uVar1;
  int in_ECX;
  int iVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00701d05;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((*(byte *)(in_ECX + 0x20) & 0x70) == 0) {
    local_8 = 0;
    fVar3 = param_1;
    fVar4 = param_2;
    uVar5 = param_3;
    uVar6 = param_4;
    uVar1 = FUN_0048e0c0(param_1,param_2);
    local_8 = 0xffffffff;
    FUN_0048e7c0(uVar1,fVar3,fVar4,uVar5,uVar6);
  }
  if (((param_1 != *(float *)(in_ECX + 0x10)) || (param_2 != *(float *)(in_ECX + 0x14))) ||
     (param_5 != '\0')) {
    LOCK();
    *(undefined4 *)(*(int *)(in_ECX + 4) + 0xc) = 0;
    UNLOCK();
    *(float *)(in_ECX + 0x10) = param_1;
    *(float *)(in_ECX + 0x14) = param_2;
    if (*(int *)(in_ECX + 0x2c) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(*(int *)(in_ECX + 0x2c) + 8);
    }
    if (iVar2 != 0) {
      if ((*(byte *)(in_ECX + 0x20) & 0x70) == 0) {
        FUN_0048e3b0(iVar2,param_1,param_2,param_3,param_4);
      }
      else {
        FUN_0048f930(param_1,param_2);
        FUN_0048e4e0(iVar2,param_1 + *(float *)(in_ECX + 0x18),param_2 + *(float *)(in_ECX + 0x1c),
                     param_3,param_4);
        if (*(char *)(in_ECX + 0x28) != '\0') {
          FUN_0048f430(iVar2);
        }
      }
    }
    FUN_0048f720(0);
  }
  ExceptionList = local_10;
  return;
}

