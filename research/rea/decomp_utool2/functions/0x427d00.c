// rea decompile_all
// name: FUN_00427d00
// address: 0x427d00
// body: available
// range: 0x427d00-0x427ffe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00427d00(int *param_1,undefined1 param_2)

{
  double *pdVar1;
  short *pv;
  undefined1 uVar2;
  HANDLE pvVar3;
  int iVar4;
  undefined4 uVar5;
  short *in_ECX;
  double *pdVar6;
  int *piVar7;
  undefined1 local_64 [8];
  undefined1 local_5c [16];
  double local_4c;
  short *local_44;
  int *local_40;
  undefined1 local_3c [2];
  ushort local_3a;
  int local_38;
  uint local_34;
  ushort local_2e;
  undefined4 local_28;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006fd763;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined ***)in_ECX = juce::WasapiClasses::WASAPIDeviceBase::vftable;
  param_1 = (int *)*param_1;
  *(int **)(in_ECX + 4) = param_1;
  local_44 = in_ECX;
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))(param_1,local_14);
  }
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x13] = 0;
  in_ECX[0x14] = 0;
  in_ECX[0x15] = 0;
  in_ECX[0x16] = 0;
  in_ECX[0x17] = 0;
  in_ECX[0x18] = 0;
  in_ECX[0x19] = 0;
  *(undefined1 *)(in_ECX + 0x1c) = param_2;
  in_ECX[0x1e] = 0;
  in_ECX[0x1f] = 0;
  in_ECX[0x20] = 0;
  in_ECX[0x21] = 0;
  in_ECX[0x22] = 0;
  in_ECX[0x23] = 0;
  in_ECX[0x26] = 0;
  in_ECX[0x27] = 0;
  in_ECX[0x30] = 4;
  in_ECX[0x31] = 0;
  in_ECX[0x32] = -1;
  in_ECX[0x33] = -1;
  *(undefined1 *)(in_ECX + 0x34) = 0;
  in_ECX[0x28] = 0;
  in_ECX[0x29] = 0;
  in_ECX[0x2a] = 0;
  in_ECX[0x2b] = 0;
  in_ECX[0x2c] = 0;
  in_ECX[0x2d] = 0;
  in_ECX[0x2e] = 0;
  in_ECX[0x2f] = 0;
  in_ECX[0x36] = 0;
  in_ECX[0x37] = 0;
  in_ECX[0x38] = 0;
  in_ECX[0x39] = 0;
  in_ECX[0x3a] = 0;
  in_ECX[0x3b] = 0;
  in_ECX[0x3c] = 0;
  in_ECX[0x3d] = 0;
  in_ECX[0x3e] = 0;
  in_ECX[0x3f] = 0;
  in_ECX[0x40] = 0;
  in_ECX[0x41] = 0;
  *(undefined1 *)(in_ECX + 0x42) = 0;
  in_ECX[0x44] = 0;
  in_ECX[0x45] = 0;
  in_ECX[0x46] = 0;
  in_ECX[0x47] = 0;
  local_8._0_1_ = 6;
  local_8._1_3_ = 0;
  pvVar3 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
  *(HANDLE *)(in_ECX + 0x24) = pvVar3;
  FUN_004284e0(&local_40);
  local_8._0_1_ = 7;
  uVar2 = (undefined1)local_8;
  local_8._0_1_ = 7;
  if (local_40 != (int *)0x0) {
    iVar4 = (**(code **)(*local_40 + 0x24))(local_40,local_64,local_5c);
    if (iVar4 < 0) {
      local_8._0_1_ = 9;
    }
    else {
      local_44 = (short *)0x0;
      iVar4 = (**(code **)(*local_40 + 0x20))(local_40,&local_44);
      pv = local_44;
      if (iVar4 < 0) {
        local_8._0_1_ = 10;
      }
      else {
        uVar5 = 0x12;
        if (*local_44 == -2) {
          uVar5 = 0x28;
        }
        FUN_004c2c30(local_3c,local_44,uVar5);
        CoTaskMemFree(pv);
        *(uint *)(in_ECX + 0x10) = (uint)local_3a;
        *(uint *)(in_ECX + 0x12) = (uint)local_3a;
        local_4c = (double)local_38 + (double)(&DAT_00c24bb0)[-(local_38 >> 0x1f)];
        *(double *)(in_ECX + 0xc) = local_4c;
        uVar5 = FUN_005c9740();
        *(undefined4 *)(in_ECX + 0x14) = uVar5;
        uVar5 = FUN_005c9740();
        *(undefined4 *)(in_ECX + 0x16) = uVar5;
        *(undefined4 *)(in_ECX + 0x1a) = local_28;
        FUN_00433090();
        if ((char)in_ECX[0x1c] != '\0') {
          FUN_00428560(local_40,local_28,local_3c);
        }
        piVar7 = &DAT_00c14350;
        do {
          pdVar6 = *(double **)(in_ECX + 0x1e);
          pdVar1 = pdVar6 + *(int *)(in_ECX + 0x22);
          for (; pdVar6 != pdVar1; pdVar6 = pdVar6 + 1) {
            if ((double)*piVar7 == *pdVar6) goto LAB_00427fbf;
          }
          local_38 = *piVar7;
          local_34 = (uint)local_2e * (uint)local_3a * local_38 >> 3;
          iVar4 = (**(code **)(*local_40 + 0x1c))(local_40,(char)in_ECX[0x1c] != '\0',local_3c,0);
          if (-1 < iVar4) {
            pdVar6 = *(double **)(in_ECX + 0x1e);
            pdVar1 = pdVar6 + *(int *)(in_ECX + 0x22);
            for (; pdVar6 != pdVar1; pdVar6 = pdVar6 + 1) {
              if ((double)*piVar7 == *pdVar6) goto LAB_00427fbf;
            }
            FUN_00433090();
          }
LAB_00427fbf:
          piVar7 = piVar7 + 1;
        } while ((int)piVar7 < 0xc14370);
        local_8._0_1_ = 0xb;
      }
    }
    uVar2 = (undefined1)local_8;
    if (local_40 != (int *)0x0) {
      (**(code **)(*local_40 + 8))(local_40);
      uVar2 = (undefined1)local_8;
    }
  }
  local_8._0_1_ = uVar2;
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

