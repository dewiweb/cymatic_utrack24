// rea decompile_all
// name: FUN_006ce630
// address: 0x6ce630
// body: available
// range: 0x6ce630-0x6ce997 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006ce630(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int *in_ECX;
  int iVar6;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int *local_10;
  int local_c;
  char local_5;
  
  local_10 = in_ECX;
  FUN_0067faa0(&local_28);
  if ((*(byte *)((int)in_ECX + 0x69) & 0x40) == 0) {
    if (*(char *)(param_1 + 2) != '\0') {
      *(undefined1 *)(param_1 + 2) = 0;
      (**(code **)(*(int *)*param_1 + 0x34))();
    }
    *(undefined1 *)(param_1 + 2) = 1;
    cVar3 = FUN_0048d720(local_28,local_24,local_20,local_1c,0,0);
    if ((cVar3 == '\0') || (cVar3 = (**(code **)(*(int *)*param_1 + 0x30))(), cVar3 == '\0')) {
      (**(code **)(*in_ECX + 0x60))(param_1);
    }
    if (*(char *)(param_1 + 2) == '\0') {
      (**(code **)(*(int *)*param_1 + 0x38))();
    }
    else {
      *(undefined1 *)(param_1 + 2) = 0;
    }
  }
  else {
    (**(code **)(*in_ECX + 0x60))(param_1);
  }
  if (0 < in_ECX[0xc]) {
    local_c = 1;
    local_14 = 0;
    do {
      iVar5 = *(int *)(local_14 + in_ECX[10]);
      local_18 = iVar5;
      if ((*(byte *)(iVar5 + 0x68) & 2) != 0) {
        if (*(int *)(iVar5 + 0x24) == 0) {
          if (((((local_28 + local_20 <= *(int *)(iVar5 + 0x10)) ||
                (local_1c + local_24 <= *(int *)(iVar5 + 0x14))) ||
               (*(int *)(iVar5 + 0x18) + *(int *)(iVar5 + 0x10) <= local_28)) ||
              ((*(int *)(iVar5 + 0x14) + *(int *)(iVar5 + 0x1c) <= local_24 || (local_20 < 1)))) ||
             ((local_1c < 1 || ((*(int *)(iVar5 + 0x18) < 1 || (*(int *)(iVar5 + 0x1c) < 1))))))
          goto LAB_006ce93d;
          if (*(char *)(param_1 + 2) != '\0') {
            *(undefined1 *)(param_1 + 2) = 0;
            (**(code **)(*(int *)*param_1 + 0x34))();
          }
          *(undefined1 *)(param_1 + 2) = 1;
          uVar4 = *(undefined4 *)(iVar5 + 0x10);
          if ((*(byte *)(iVar5 + 0x69) & 0x40) == 0) {
            local_44 = *(undefined4 *)(iVar5 + 0x14);
            local_40 = *(undefined4 *)(iVar5 + 0x18);
            local_3c = *(undefined4 *)(iVar5 + 0x1c);
            *(undefined1 *)(param_1 + 2) = 0;
            local_48 = uVar4;
            (**(code **)(*(int *)*param_1 + 0x34))();
            cVar3 = (**(code **)(*(int *)*param_1 + 0x14))(&local_48);
            piVar2 = local_10;
            if (cVar3 != '\0') {
              local_5 = '\x01';
              iVar6 = local_c;
              if (local_c < local_10[0xc]) {
                do {
                  iVar5 = *(int *)(piVar2[10] + iVar6 * 4);
                  if (((*(byte *)(iVar5 + 0x68) & 6) == 6) && (*(int *)(iVar5 + 0x24) == 0)) {
                    local_58 = *(undefined4 *)(iVar5 + 0x10);
                    local_54 = *(undefined4 *)(iVar5 + 0x14);
                    local_50 = *(undefined4 *)(iVar5 + 0x18);
                    local_4c = *(undefined4 *)(iVar5 + 0x1c);
                    local_5 = '\0';
                    if (*(char *)(param_1 + 2) != '\0') {
                      *(undefined1 *)(param_1 + 2) = 0;
                      (**(code **)(*(int *)*param_1 + 0x34))();
                    }
                    (**(code **)(*(int *)*param_1 + 0x1c))(&local_58);
                  }
                  iVar5 = local_18;
                  iVar6 = iVar6 + 1;
                } while (iVar6 < piVar2[0xc]);
                if ((local_5 == '\0') &&
                   (cVar3 = (**(code **)(*(int *)*param_1 + 0x30))(), cVar3 != '\0'))
                goto LAB_006ce92a;
              }
              uVar4 = *(undefined4 *)(iVar5 + 0x10);
              goto LAB_006ce8fd;
            }
          }
          else {
LAB_006ce8fd:
            FUN_00677430(uVar4,*(undefined4 *)(iVar5 + 0x14));
            if (*(int **)(iVar5 + 0x40) == (int *)0x0) goto LAB_006ce920;
            (**(code **)(**(int **)(iVar5 + 0x40) + 4))(param_1);
          }
        }
        else {
          if (*(char *)(param_1 + 2) != '\0') {
            *(undefined1 *)(param_1 + 2) = 0;
            (**(code **)(*(int *)*param_1 + 0x34))();
          }
          *(undefined1 *)(param_1 + 2) = 1;
          uVar4 = *(undefined4 *)(iVar5 + 0x24);
          *(undefined1 *)(param_1 + 2) = 0;
          (**(code **)(*(int *)*param_1 + 0x34))();
          (**(code **)(*(int *)*param_1 + 0xc))(uVar4);
          if (((*(byte *)(iVar5 + 0x69) & 0x40) == 0) ||
             (cVar3 = (**(code **)(*(int *)*param_1 + 0x30))(), cVar3 != '\0')) {
            local_38 = *(undefined4 *)(iVar5 + 0x10);
            local_34 = *(undefined4 *)(iVar5 + 0x14);
            local_30 = *(undefined4 *)(iVar5 + 0x18);
            local_2c = *(undefined4 *)(iVar5 + 0x1c);
            if (*(char *)(param_1 + 2) != '\0') {
              *(undefined1 *)(param_1 + 2) = 0;
              (**(code **)(*(int *)*param_1 + 0x34))();
            }
            cVar3 = (**(code **)(*(int *)*param_1 + 0x14))(&local_38);
            if (cVar3 == '\0') goto LAB_006ce92a;
          }
          FUN_00677430(*(undefined4 *)(iVar5 + 0x10),*(undefined4 *)(iVar5 + 0x14));
          if (*(int **)(iVar5 + 0x40) != (int *)0x0) {
            (**(code **)(**(int **)(iVar5 + 0x40) + 4))(param_1);
            goto LAB_006ce92a;
          }
LAB_006ce920:
          FUN_006ce360(param_1,0);
        }
LAB_006ce92a:
        if (*(char *)(param_1 + 2) == '\0') {
          (**(code **)(*(int *)*param_1 + 0x38))();
        }
        else {
          *(undefined1 *)(param_1 + 2) = 0;
        }
      }
LAB_006ce93d:
      iVar5 = local_c + 1;
      local_14 = local_14 + 4;
      bVar1 = local_c < local_10[0xc];
      in_ECX = local_10;
      local_c = iVar5;
    } while (bVar1);
  }
  if (*(char *)(param_1 + 2) != '\0') {
    *(undefined1 *)(param_1 + 2) = 0;
    (**(code **)(*(int *)*param_1 + 0x34))();
  }
  *(undefined1 *)(param_1 + 2) = 1;
  (**(code **)(*in_ECX + 100))(param_1);
  if (*(char *)(param_1 + 2) == '\0') {
    (**(code **)(*(int *)*param_1 + 0x38))();
    return;
  }
  *(undefined1 *)(param_1 + 2) = 0;
  return;
}

