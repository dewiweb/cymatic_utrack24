// rea decompile_all
// name: FUN_006e7aa0
// address: 0x6e7aa0
// body: available
// range: 0x6e7aa0-0x6e7e1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_006e7aa0(int *param_1,undefined4 *param_2,int *param_3,int *param_4)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  int in_ECX;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 local_58 [16];
  undefined4 local_48;
  int *piStack_44;
  int *piStack_40;
  uint uStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  uint local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00728a85;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  local_1c = 0;
  local_48 = 0;
  piStack_44 = (int *)0x0;
  piStack_40 = (int *)0x0;
  uStack_3c = 0;
  if ((*(int *)(in_ECX + 0x18) == 0) ||
     (local_18 = *(int *)(*(int *)(in_ECX + 0x7c) + 0x80) / *(int *)(in_ECX + 0x8c),
     *(uint *)(in_ECX + 0x88) <= local_18)) {
    local_18 = 0xffffffff;
  }
  iVar8 = *(int *)(*(int *)(in_ECX + 0x7c) + 0xbc) / *(int *)(in_ECX + 0x8c) + 1;
  local_14 = in_ECX;
  if (-1 < iVar8) {
    iVar10 = iVar8 + local_18;
    do {
      iVar9 = *(int *)(local_14 + 0x7c);
      if ((iVar10 < *(int *)(iVar9 + 0x328)) ||
         (iVar1 = *(int *)(iVar9 + 0x324), *(int *)(iVar9 + 0x328) + iVar1 <= iVar10)) {
LAB_006e7b6b:
        iVar9 = 0;
      }
      else {
        iVar7 = 1;
        if (1 < iVar1) {
          iVar7 = iVar1;
        }
        if (*(uint *)(iVar9 + 0x324) <= (uint)(iVar10 % iVar7)) goto LAB_006e7b6b;
        iVar9 = *(int *)(*(int *)(iVar9 + 0x31c) + (iVar10 % iVar7) * 4);
      }
      if (iVar9 != 0) {
        uVar3 = 0;
        if (0 < (int)param_2[2]) {
          piVar6 = (int *)*param_2;
          do {
            if (iVar10 < *piVar6) {
              if ((uVar3 & 1) != 0) {
                FUN_006e1ae0(&local_24,iVar9,0,0);
                local_30 = *(undefined4 *)(iVar9 + 0x18);
                local_2c = *(undefined4 *)(iVar9 + 0x1c);
                local_38 = local_24;
                local_34 = local_20;
                puVar4 = (undefined4 *)FUN_004af870(local_58,&local_38);
                local_48 = *puVar4;
                piStack_44 = (int *)puVar4[1];
                piStack_40 = (int *)puVar4[2];
                uStack_3c = puVar4[3];
              }
              break;
            }
            uVar3 = uVar3 + 1;
            piVar6 = piVar6 + 1;
          } while ((int)uVar3 < (int)param_2[2]);
        }
      }
      iVar10 = iVar10 + -1;
      iVar8 = iVar8 + -1;
    } while (-1 < iVar8);
  }
  iVar9 = local_14;
  uVar5 = FUN_006e6400(local_58);
  piVar6 = (int *)FUN_0044db90(&local_38,uVar5);
  local_28 = *piVar6;
  local_20 = piVar6[1];
  iVar8 = piVar6[2];
  iVar10 = piVar6[3];
  *param_3 = local_28;
  *param_4 = local_20;
  local_8 = 1;
  FUN_00673a00(param_1,2,iVar8,iVar10,1);
  local_8 = 0;
  local_1c = 1;
  iVar8 = *(int *)(*(int *)(iVar9 + 0x7c) + 0xbc) / *(int *)(iVar9 + 0x8c) + 1;
  if (iVar8 < 0) {
    ExceptionList = local_10;
    return param_1;
  }
  iVar10 = local_18 + iVar8;
  do {
    iVar9 = *(int *)(local_14 + 0x7c);
    if ((iVar10 < *(int *)(iVar9 + 0x328)) ||
       (iVar1 = *(int *)(iVar9 + 0x324), *(int *)(iVar9 + 0x328) + iVar1 <= iVar10)) {
      iVar9 = 0;
    }
    else {
      iVar7 = 1;
      if (1 < iVar1) {
        iVar7 = iVar1;
      }
      if ((uint)(iVar10 % iVar7) < *(uint *)(iVar9 + 0x324)) {
        iVar9 = *(int *)(*(int *)(iVar9 + 0x31c) + (iVar10 % iVar7) * 4);
      }
      else {
        iVar9 = 0;
      }
    }
    if (iVar9 != 0) {
      uVar3 = 0;
      if (0 < (int)param_2[2]) {
        piVar6 = (int *)*param_2;
        do {
          if (iVar10 < *piVar6) {
            if ((uVar3 & 1) != 0) {
              if ((int *)*param_1 == (int *)0x0) {
                piStack_44 = (int *)0x0;
              }
              else {
                piStack_44 = (int *)(**(code **)(*(int *)*param_1 + 4))();
              }
              uStack_3c = uStack_3c & 0xffffff00;
              local_8 = 2;
              piStack_40 = piStack_44;
              piVar6 = (int *)FUN_006e1ae0(&local_30,iVar9,0,0);
              FUN_00677430(*piVar6 - local_28,piVar6[1] - local_20);
              FUN_006e6400(local_58);
              if ((char)uStack_3c != '\0') {
                uStack_3c = uStack_3c & 0xffffff00;
                (**(code **)(*piStack_44 + 0x34))();
              }
              cVar2 = (**(code **)(*piStack_44 + 0x14))(local_58);
              if (cVar2 != '\0') {
                if ((char)uStack_3c != '\0') {
                  uStack_3c = uStack_3c & 0xffffff00;
                  (**(code **)(*piStack_44 + 0x34))();
                }
                (**(code **)(*piStack_44 + 0x3c))(0x3f19999a);
                FUN_006ce360(&piStack_44,0);
                (**(code **)(*piStack_44 + 0x40))();
              }
              local_8 = local_8 & 0xffffff00;
              if (piStack_40 != (int *)0x0) {
                (**(code **)*piStack_40)(1);
              }
            }
            break;
          }
          uVar3 = uVar3 + 1;
          piVar6 = piVar6 + 1;
        } while ((int)uVar3 < (int)param_2[2]);
      }
    }
    iVar8 = iVar8 + -1;
    iVar10 = iVar10 + -1;
    if (iVar8 < 0) {
      ExceptionList = local_10;
      return param_1;
    }
  } while( true );
}

