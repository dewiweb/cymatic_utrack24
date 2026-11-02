// rea decompile_all
// name: FUN_006cd6a0
// address: 0x6cd6a0
// body: available
// range: 0x6cd6a0-0x6cda08 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006cd6a0(int param_1,undefined4 param_2,undefined4 param_3,void *param_4,undefined4 param_5
                 )

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  int *in_ECX;
  undefined4 uVar6;
  undefined4 uStack_e8;
  undefined4 **ppuStack_e4;
  int *piStack_e0;
  undefined4 *local_1c;
  void *local_18;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  iVar1 = DAT_00c8a67c;
  local_8 = 0xffffffff;
  puStack_c = &LAB_007267e4;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (DAT_00c8a67c == 0) {
    piStack_e0 = (int *)0x6cd6ec;
    local_18 = operator_new(0xd0);
    local_8 = iVar1;
    DAT_00c8a67c = FUN_006cb960();
  }
  local_8 = 0xffffffff;
  if (in_ECX == (int *)0x0) {
    local_1c = (undefined4 *)0x0;
  }
  else {
    piStack_e0 = (int *)0x6cd71b;
    local_1c = (undefined4 *)FUN_0040de70();
  }
  if (local_1c != (undefined4 *)0x0) {
    LOCK();
    local_1c[1] = local_1c[1] + 1;
    UNLOCK();
  }
  local_8 = 1;
  piVar3 = (int *)FUN_006cecc0();
  piVar4 = in_ECX;
  if (piVar3 != (int *)0x0) {
    for (; piVar3 != piVar4; piVar4 = (int *)piVar4[3]) {
      if (piVar4 == (int *)0x0) {
        piStack_e0 = (int *)0x6cd76c;
        cVar2 = (**(code **)(*piVar3 + 0x9c))();
        if (cVar2 == '\0') {
          *(byte *)((int)in_ECX + 0x69) = *(byte *)((int)in_ECX + 0x69) | 0x80;
          piVar4 = (int *)FUN_006cecc0();
          if (piVar4 != (int *)0x0) {
            (**(code **)(*piVar4 + 0xa0))();
          }
          if (local_1c == (undefined4 *)0x0) {
            ExceptionList = local_10;
            return;
          }
          if (local_1c[2] == 0) goto LAB_006cd9dd;
          cVar2 = FUN_006ceda0();
          if (cVar2 != '\0') {
            piStack_e0 = param_4;
            uStack_e8 = param_2;
            ppuStack_e4 = (undefined4 **)param_3;
            uVar6 = 0;
            uVar5 = FUN_0048f180(0,param_2,param_3,param_4,param_5);
            FUN_006c9d30(param_1,*(uint *)(param_1 + 0x20) | DAT_00c8a9c8 & 0xffffff8f,in_ECX,in_ECX
                         ,uVar5,uVar6,param_2,param_3,param_4,param_5);
            FUN_006cb130();
            piStack_e0 = (int *)&LAB_00426f10;
            ppuStack_e4 = &local_1c;
            uStack_e8 = 0x6cd85b;
            FUN_004b0b00();
            goto LAB_006cd9dd;
          }
        }
        break;
      }
    }
  }
  *(byte *)((int)in_ECX + 0x69) = *(byte *)((int)in_ECX + 0x69) & 0x7f;
  piVar4 = in_ECX;
  do {
    if ((*(byte *)((int)piVar4 + 0x69) & 4) != 0) {
      piStack_e0 = (int *)0x6cd875;
      FUN_006e9910();
      if (local_1c == (undefined4 *)0x0) {
        ExceptionList = local_10;
        return;
      }
      if (local_1c[2] == 0) goto LAB_006cd9dd;
    }
    piVar4 = (int *)piVar4[3];
  } while (piVar4 != (int *)0x0);
  if (*(byte *)(in_ECX + 0x1a) < 0x80) {
    ppuStack_e4 = (undefined4 **)0x6cd8a1;
    piStack_e0 = piVar4;
    FUN_006cc500();
    if (local_1c == (undefined4 *)0x0) {
      ExceptionList = local_10;
      return;
    }
    if (local_1c[2] == 0) goto LAB_006cd9dd;
  }
  if ((*(byte *)((int)in_ECX + 0x69) & 8) != 0) {
    FUN_006e6400(&uStack_e8);
    FUN_006ce9f0(1);
  }
  local_18 = param_4;
  FUN_0048f180();
  piStack_e0 = (int *)0x6cd999;
  (**(code **)(*in_ECX + 0x10))();
  if (local_1c == (undefined4 *)0x0) {
    ExceptionList = local_10;
    return;
  }
  if (local_1c[2] != 0) {
    FUN_006cb130();
    piStack_e0 = (int *)&LAB_00426f10;
    ppuStack_e4 = &local_1c;
    uStack_e8 = 0x6cd9c6;
    FUN_004b0b00();
    piStack_e0 = (int *)&LAB_00426f10;
    ppuStack_e4 = (undefined4 **)0x6cd9da;
    FUN_0048cfe0();
  }
LAB_006cd9dd:
  if (local_1c != (undefined4 *)0x0) {
    LOCK();
    piVar4 = local_1c + 1;
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      piStack_e0 = (int *)0x6cd9f5;
      (**(code **)*local_1c)();
    }
  }
  ExceptionList = local_10;
  return;
}

