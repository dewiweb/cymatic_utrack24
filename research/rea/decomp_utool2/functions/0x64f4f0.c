// rea decompile_all
// name: FUN_0064f4f0
// address: 0x64f4f0
// body: available
// range: 0x64f4f0-0x64fa61 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x64fa5d to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0064f4f0(uint param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_ECX;
  uint uVar4;
  undefined4 extraout_ECX;
  int iVar5;
  int in_EDX;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  char *pcVar10;
  uint uVar11;
  undefined4 *puVar12;
  int local_548;
  char *local_544;
  undefined4 local_f0;
  undefined1 local_70;
  undefined1 local_6f;
  undefined1 local_6e;
  undefined1 local_6d;
  char acStack_69 [93];
  uint local_c;
  
  local_c = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  local_544 = (char *)0x0;
  bVar1 = false;
  if ((*(uint *)(in_ECX + 0x28) & 1) == 0) {
LAB_0064fa5d:
                    /* WARNING: Subroutine does not return */
    FUN_00656590();
  }
  if ((*(uint *)(in_ECX + 0x28) & 6) != 0) {
    FUN_00650a40();
    if ((*(uint *)(in_ECX + 0x2c) & 0x100000) != 0) {
      FUN_00656080("out of place");
      FUN_006563b0();
      __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
      return;
    }
    goto LAB_0064fa5d;
  }
  if (param_1 < 9) {
    FUN_00650a40();
  }
  else {
    if ((short)*(ushort *)(in_ECX + 0x2ce) < 0) {
      FUN_00650a40();
      __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
      return;
    }
    if ((*(ushort *)(in_ECX + 0x2ce) & 4) == 0) {
      uVar11 = 0x51;
      if (param_1 < 0x51) {
        uVar11 = param_1;
      }
      FUN_00650b50(uVar11);
      param_1 = param_1 - uVar11;
      uVar7 = 0;
      uVar4 = 3;
      uVar6 = 1;
      do {
        if ((uVar11 <= uVar7) || (acStack_69[uVar6] == '\0')) break;
        if ((uVar11 <= uVar6) || (acStack_69[uVar6 + 1] == '\0')) {
          uVar7 = uVar7 + 1;
          break;
        }
        if ((uVar11 <= uVar4 - 1) || (acStack_69[uVar4] == '\0')) {
          uVar7 = uVar7 + 2;
          break;
        }
        if ((uVar11 <= uVar4) || (acStack_69[uVar4 + 1] == '\0')) {
          uVar7 = uVar7 + 3;
          break;
        }
        if ((uVar11 <= uVar7 + 4) || (acStack_69[uVar7 + 5] == '\0')) {
          uVar7 = uVar7 + 4;
          break;
        }
        uVar6 = uVar6 + 5;
        uVar7 = uVar7 + 5;
        uVar4 = uVar4 + 5;
      } while (uVar6 < 0x51);
      if (0x4e < uVar7 - 1) {
        local_544 = "bad keyword";
        goto LAB_0064fa17;
      }
      uVar6 = uVar7 + 1;
      if ((uVar11 <= uVar6) || (acStack_69[uVar7 + 2] != '\0')) {
        local_544 = "bad compression method";
        goto LAB_0064fa17;
      }
      iVar2 = FUN_00650810(uVar4);
      if (iVar2 != 0) {
        local_544 = *(char **)(in_ECX + 0x50);
        goto LAB_0064fa17;
      }
      local_548 = 0x84;
      *(char **)(in_ECX + 0x38) = acStack_69 + uVar7 + 3;
      *(uint *)(in_ECX + 0x3c) = (uVar11 - uVar7) + -2;
      FUN_006503d0(extraout_ECX,&param_1,&local_f0,&local_548,0);
      if (local_548 == 0) {
        iVar8 = CONCAT31(CONCAT21(CONCAT11((undefined1)local_f0,local_f0._1_1_),local_f0._2_1_),
                         local_f0._3_1_);
        iVar2 = FUN_00657f10(acStack_69 + 1,iVar8);
        if ((iVar2 != 0) &&
           (iVar2 = FUN_00657c00(acStack_69 + 1,iVar8,&local_f0,*(undefined1 *)(in_ECX + 0x10b)),
           iVar2 != 0)) {
          local_548 = CONCAT31(CONCAT21(CONCAT11(local_70,local_6f),local_6e),local_6d);
          puVar3 = (undefined4 *)FUN_00650920(2);
          iVar2 = local_548;
          if (puVar3 == (undefined4 *)0x0) {
            local_544 = "out of memory";
          }
          else {
            puVar9 = &local_f0;
            puVar12 = puVar3;
            for (iVar5 = 0x21; iVar5 != 0; iVar5 = iVar5 + -1) {
              *puVar12 = *puVar9;
              puVar9 = puVar9 + 1;
              puVar12 = puVar12 + 1;
            }
            local_548 = local_548 * 0xc;
            FUN_006503d0(&local_548,&param_1,puVar3 + 0x21,&local_548,0);
            if (local_548 != 0) goto LAB_0064f9c8;
            iVar5 = FUN_00657ae0(acStack_69 + 1,iVar8,puVar3);
            if (iVar5 != 0) {
              local_548 = iVar8 + iVar2 * -0xc + -0x84;
              FUN_006503d0(puVar3,&param_1,puVar3 + (iVar2 + 0xb) * 3,&local_548,1);
              if ((param_1 == 0) || ((*(uint *)(in_ECX + 0x2c) & 0x100000) != 0)) {
                if (local_548 == 0) {
                  if (param_1 != 0) {
                    FUN_00656020();
                  }
                  FUN_00650a40();
                  bVar1 = true;
                  iVar2 = FUN_006577e0(*(undefined4 *)(in_ECX + 0x68));
                  if (iVar2 != 0) {
                    FUN_006577a0(puVar3);
                  }
                  if (in_EDX == 0) {
LAB_0064f998:
                    *(undefined4 *)(in_ECX + 0x34) = 0;
                    __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
                    return;
                  }
                  FUN_00659160(0x10,0);
                  if (uVar6 == 0) {
                    iVar2 = 0;
                  }
                  else {
                    iVar2 = FUN_004c554b(uVar6);
                  }
                  *(int *)(in_EDX + 0x74) = iVar2;
                  if (iVar2 == 0) {
                    pcVar10 = "out of memory";
                    *(ushort *)(in_ECX + 0x2ce) = *(ushort *)(in_ECX + 0x2ce) | 0x8000;
                    local_544 = "out of memory";
                  }
                  else {
                    FUN_004c2c30(iVar2,acStack_69 + 1,uVar6);
                    *(undefined4 *)(in_ECX + 0x260) = 0;
                    *(uint *)(in_EDX + 0xe8) = *(uint *)(in_EDX + 0xe8) | 0x10;
                    *(uint *)(in_EDX + 8) = *(uint *)(in_EDX + 8) | 0x1000;
                    *(int *)(in_EDX + 0x7c) = iVar8;
                    pcVar10 = (char *)0x0;
                    *(undefined4 **)(in_EDX + 0x78) = puVar3;
                  }
                  FUN_00658ca0();
                  if (pcVar10 == (char *)0x0) goto LAB_0064f998;
                }
                else {
                  local_544 = "truncated";
                }
              }
              else {
                local_544 = "extra compressed data";
              }
            }
          }
        }
      }
      else {
LAB_0064f9c8:
        local_544 = *(char **)(in_ECX + 0x50);
      }
      *(undefined4 *)(in_ECX + 0x34) = 0;
      if (!bVar1) goto LAB_0064fa17;
    }
    else {
      local_544 = "too many profiles";
LAB_0064fa17:
      FUN_00650a40();
    }
    *(ushort *)(in_ECX + 0x2ce) = *(ushort *)(in_ECX + 0x2ce) | 0x8000;
    FUN_00658ca0();
    if (local_544 == (char *)0x0) goto LAB_0064fa4c;
  }
  FUN_00655fd0();
LAB_0064fa4c:
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}

