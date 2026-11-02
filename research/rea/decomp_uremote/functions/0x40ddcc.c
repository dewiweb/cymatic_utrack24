// rea decompile_all
// name: FUN_0040ddcc
// address: 0x40ddcc
// body: available
// range: 0x40ddcc-0x40e0c0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0040ddcc(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  int in_EAX;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int local_8;
  
  if (((in_EAX == 0) || (*(int *)(in_EAX + 0x58) == 0)) ||
     (iVar1 = *(int *)(in_EAX + 0x54), iVar1 == 0)) {
    return 0x23;
  }
  FUN_0040db9a();
  puVar2 = *(undefined4 **)(in_EAX + 0x60);
  piVar3 = *(int **)(puVar2[1] + 0xa0);
  if ((param_2 & 0x400) != 0) {
    param_2 = param_2 | 0x801;
  }
  if ((param_2 & 1) != 0) {
    param_2 = param_2 & 0xfffffffb | 10;
  }
  if ((((piVar3 != (int *)0x0) && ((param_2 & 2) == 0)) &&
      (((param_2 & 0x8000) == 0 &&
       ((uVar8 = *(uint *)*puVar2, (uVar8 & 0x100) != 0 && ((uVar8 & 0x200) == 0)))))) &&
     (uVar4 = *(uint *)(in_EAX + 8), (uVar4 & 0x2000) == 0)) {
    if ((param_2 & 0x800) == 0) {
      iVar5 = *(int *)(in_EAX + 0x80);
      if (((*(int *)(iVar5 + 0xc) != 0) || (*(int *)(iVar5 + 4) == 0)) &&
         ((*(int *)(iVar5 + 4) != 0 || (*(int *)(iVar5 + 0xc) == 0)))) goto LAB_0040df5a;
    }
    if ((((((param_2 & 0x20) != 0) || ((uVar8 & 0x400) == 0)) || ((param_2 & 0xf0000) == 0x10000))
        || (*(char *)(*(int *)(in_EAX + 0x80) + 0x38) != '\0')) ||
       ((((uVar4 & 8) != 0 && (*(int *)(in_EAX + 0x2dc) != 0)) && (*(short *)(in_EAX + 0x11e) == 0))
       )) {
      if ((((uVar4 & 2) == 0) || ((param_2 & 8) != 0)) ||
         ((iVar5 = (**(code **)(puVar2[3] + 0x50))
                             (iVar1,*(undefined4 *)(in_EAX + 0x58),param_1,param_2 | 0x4000),
          iVar5 != 0 || (local_8 = 0, *(int *)(iVar1 + 0x48) != 0x62697473)))) {
        iVar5 = *(int *)(in_EAX + 0x80);
        uVar6 = *(undefined4 *)(iVar5 + 0x1c);
        *(undefined4 *)(iVar5 + 0x1c) = 0;
        local_8 = (**(code **)(*(int *)(*piVar3 + 0x14) + 0xc))
                            (piVar3,iVar1,*(undefined4 *)(in_EAX + 0x58),param_1,param_2);
        *(undefined4 *)(iVar5 + 0x1c) = uVar6;
      }
      goto LAB_0040dfab;
    }
  }
LAB_0040df5a:
  iVar5 = (**(code **)(puVar2[3] + 0x50))(iVar1,*(undefined4 *)(in_EAX + 0x58),param_1,param_2);
  if (iVar5 != 0) {
    return iVar5;
  }
  local_8 = 0;
  if (*(int *)(iVar1 + 0x48) == 0x6f75746c) {
    iVar5 = FUN_004105b0();
    if (iVar5 != 0) {
      return iVar5;
    }
    local_8 = 0;
    if ((param_2 & 2) == 0) {
      FUN_0040dd35((byte)param_2 & 0x10);
    }
  }
LAB_0040dfab:
  if ((param_2 & 0x10) == 0) {
    *(undefined4 *)(iVar1 + 0x44) = 0;
    *(undefined4 *)(iVar1 + 0x40) = *(undefined4 *)(iVar1 + 0x28);
  }
  else {
    *(undefined4 *)(iVar1 + 0x40) = 0;
    *(undefined4 *)(iVar1 + 0x44) = *(undefined4 *)(iVar1 + 0x34);
  }
  if (((param_2 & 0x2000) == 0) && ((*(byte *)(in_EAX + 8) & 1) != 0)) {
    iVar5 = *(int *)(in_EAX + 0x58);
    uVar6 = FUN_0040d230(*(undefined4 *)(iVar5 + 0x10));
    *(undefined4 *)(iVar1 + 0x38) = uVar6;
    uVar6 = FUN_0040d230(*(undefined4 *)(iVar5 + 0x14));
    *(undefined4 *)(iVar1 + 0x3c) = uVar6;
  }
  if (((param_2 & 0x800) == 0) && (iVar5 = *(int *)(in_EAX + 0x80), *(int *)(iVar5 + 0x1c) != 0)) {
    iVar7 = FUN_0040fb6c();
    if (iVar7 == 0) {
      if (*(int *)(iVar1 + 0x48) == 0x6f75746c) {
        if ((*(byte *)(iVar5 + 0x1c) & 1) != 0) {
          FUN_004107d0();
        }
        if ((*(byte *)(iVar5 + 0x1c) & 2) != 0) {
          FUN_00410751(*(undefined4 *)(iVar5 + 0x14),*(undefined4 *)(iVar5 + 0x18));
        }
      }
    }
    else {
      local_8 = (**(code **)(*(int *)(iVar7 + 0xc) + 0x2c))(iVar7,iVar1,iVar5 + 4,iVar5 + 0x14);
    }
    FUN_00410783();
  }
  if ((((local_8 == 0) && (*(int *)(iVar1 + 0x48) != 0x62697473)) &&
      (*(int *)(iVar1 + 0x48) != 0x636f6d70)) && ((param_2 & 4) != 0)) {
    uVar8 = (int)param_2 >> 0x10 & 0xf;
    if ((uVar8 == 0) && ((param_2 & 0x1000) != 0)) {
      uVar8 = 2;
    }
    local_8 = FUN_0040fd8c(uVar8);
  }
  return local_8;
}

