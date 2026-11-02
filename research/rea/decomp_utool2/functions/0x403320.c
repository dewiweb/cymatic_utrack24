// rea decompile_all
// name: FUN_00403320
// address: 0x403320
// body: available
// range: 0x403320-0x4034d2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00403320(int param_1,int param_2,char param_3,char param_4,char param_5)

{
  uint _Size;
  void *_Memory;
  uint uVar1;
  int iVar2;
  int *in_ECX;
  uint3 uVar5;
  undefined4 uVar3;
  int iVar4;
  uint uVar6;
  int iVar7;
  uint uVar8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_006fbf70;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((param_2 != in_ECX[1]) || (param_1 != *in_ECX)) {
    uVar8 = param_2 + 3U & 0xfffffffc;
    uVar6 = param_1 * 4 + 0x13U & 0xfffffff0;
    _Size = uVar6 + (uVar8 * param_1 + 8) * 4;
    uVar5 = (uint3)((uint)in_ECX >> 8);
    if (param_3 == '\0') {
      if ((param_5 == '\0') || ((uint)in_ECX[2] < _Size)) {
        in_ECX[2] = _Size;
        if ((param_4 == '\0') && ((char)in_ECX[0x25] == '\0')) {
          iVar4 = (uint)uVar5 << 8;
        }
        else {
          iVar4 = 1;
        }
        FUN_00403500(_Size,iVar4);
        in_ECX[3] = in_ECX[4];
      }
      else if ((param_4 != '\0') || ((char)in_ECX[0x25] != '\0')) {
        _memset((void *)in_ECX[4],0,_Size);
      }
      iVar4 = 0;
      iVar2 = in_ECX[4] + uVar6;
      if (0 < param_1) {
        do {
          *(int *)(in_ECX[3] + iVar4 * 4) = iVar2;
          iVar4 = iVar4 + 1;
          iVar2 = iVar2 + uVar8 * 4;
        } while (iVar4 < param_1);
      }
    }
    else {
      if ((param_4 == '\0') && ((char)in_ECX[0x25] == '\0')) {
        uVar3 = 0;
      }
      else {
        uVar3 = CONCAT31(uVar5,1);
      }
      FUN_00403500(_Size,uVar3);
      iVar4 = param_2;
      if (in_ECX[1] < param_2) {
        iVar4 = in_ECX[1];
      }
      iVar2 = 0;
      if (0 < param_1) {
        do {
          *(uint *)(iVar2 * 4) = uVar6;
          iVar2 = iVar2 + 1;
          uVar6 = uVar6 + uVar8 * 4;
        } while (iVar2 < param_1);
      }
      if ((char)in_ECX[0x25] == '\0') {
        iVar2 = *in_ECX;
        if (param_1 < *in_ECX) {
          iVar2 = param_1;
        }
        if (0 < iVar2) {
          iVar7 = 0;
          do {
            FUN_004c2c30(*(undefined4 *)(iVar7 * 4),*(undefined4 *)(in_ECX[3] + iVar7 * 4),iVar4 * 4
                         ,uVar1);
            iVar7 = iVar7 + 1;
          } while (iVar7 < iVar2);
        }
      }
      _Memory = (void *)in_ECX[4];
      in_ECX[4] = 0;
      in_ECX[2] = _Size;
      in_ECX[3] = 0;
      FID_conflict__free(_Memory);
    }
    *(undefined4 *)(in_ECX[3] + param_1 * 4) = 0;
    in_ECX[1] = param_2;
    *in_ECX = param_1;
  }
  ExceptionList = local_10;
  return;
}

