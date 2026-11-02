// rea decompile_all
// name: FUN_00681150
// address: 0x681150
// body: available
// range: 0x681150-0x6813b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00681150(int *param_1,int param_2,undefined4 param_3,float param_4,undefined4 param_5,
                 undefined4 param_6,int param_7,float param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int *in_ECX;
  int *_Memory;
  int iVar5;
  undefined4 in_XMM3_Da;
  float fVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar1 = param_2;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00720953;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_8 == 0.0) {
    param_8 = 0.7;
  }
  cVar4 = FUN_0062e1c0();
  if (cVar4 != '\0') {
    FUN_00642b60(iVar1,param_1,param_3,param_4);
    ExceptionList = local_10;
    return;
  }
  iVar1 = in_ECX[2];
  FUN_006378b0();
  local_8 = 0;
  FUN_00642ff0(param_1,&param_2,param_3);
  iVar2 = in_ECX[2];
  iVar5 = iVar2 - iVar1;
  if (0 < iVar5) {
    iVar3 = *in_ECX;
    fVar6 = (*(float *)(iVar3 + -8 + iVar2 * 0x1c) + *(float *)(iVar3 + -0x10 + iVar2 * 0x1c)) -
            *(float *)(iVar3 + 0xc + iVar1 * 0x1c);
    if (0.0 < fVar6) {
      if (param_4 <= fVar6 * param_8) {
        if (param_7 < 2) {
          FUN_00642a50(iVar1,iVar5,param_3,param_4,param_5,param_1);
        }
        else {
          iVar2 = *param_1;
          if (iVar2 != 0) {
            LOCK();
            *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
            UNLOCK();
          }
          FUN_00642150(&param_2,iVar2,iVar1,in_XMM3_Da,param_3,param_4,param_5,param_7,fVar6);
        }
      }
      else {
        if (param_4 < fVar6) {
          FUN_006429a0();
        }
        FUN_00642800(iVar1,iVar5,param_3,param_4);
      }
    }
  }
  _Memory = (int *)(param_2 + -8);
  if (_Memory != &DAT_00bfe124) {
    LOCK();
    iVar1 = *_Memory;
    *_Memory = *_Memory + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(_Memory);
    }
  }
  ExceptionList = local_10;
  return;
}

