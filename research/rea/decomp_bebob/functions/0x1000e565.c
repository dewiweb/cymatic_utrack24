// rea decompile_all
// name: ATL::AtlIAccessibleInvokeHelper
// address: 0x1000e565
// body: available
// range: 0x1000e565-0x1000eaf2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */
/* Library Function - Single Match
    long __stdcall ATL::AtlIAccessibleInvokeHelper(struct IAccessible *,long,struct _GUID const
   &,unsigned long,unsigned short,struct tagDISPPARAMS *,struct tagVARIANT *,struct tagEXCEPINFO
   *,unsigned int *)
   
   Library: Visual Studio 2010 Release */

long ATL::AtlIAccessibleInvokeHelper
               (IAccessible *param_1,long param_2,_GUID *param_3,ulong param_4,ushort param_5,
               tagDISPPARAMS *param_6,tagVARIANT *param_7,tagEXCEPINFO *param_8,uint *param_9)

{
  ushort uVar1;
  IAccessible *pIVar2;
  IAccessible *pIVar3;
  IAccessible *pIVar4;
  tagDISPPARAMS *ptVar5;
  ushort *puVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  undefined2 in_stack_00000016;
  undefined2 uVar11;
  ushort *local_48 [4];
  undefined4 *local_38;
  int local_34 [4];
  int local_24 [4];
  ushort local_14 [8];
  
  ptVar5 = param_6;
  pIVar4 = param_1;
  iVar8 = 0;
  local_34[0]._0_2_ = 0;
  if (param_1 == (IAccessible *)0x0) {
    return -0x7ff8ffa9;
  }
  if (param_6 == (tagDISPPARAMS *)0x0) {
    return -0x7ffdfff8;
  }
  pIVar2 = *(IAccessible **)(param_6 + 8);
  if ((IAccessible *)&DAT_00000005 < pIVar2) {
    return -0x7ffdfff2;
  }
  param_1 = (IAccessible *)0x0;
  if (*(int *)(param_6 + 0xc) != 0) {
    param_6 = *(tagDISPPARAMS **)(param_6 + 4);
    do {
      pIVar3 = *(IAccessible **)param_6;
      if (pIVar2 <= pIVar3) {
        return -0x7ffdfff2;
      }
      param_6 = param_6 + 4;
      param_1 = param_1 + 1;
      local_48[(int)pIVar3] = (ushort *)(*(int *)ptVar5 + iVar8);
      iVar8 = iVar8 + 0x10;
    } while (param_1 < *(IAccessible **)(ptVar5 + 0xc));
  }
  if (param_1 < pIVar2) {
    iVar8 = (int)param_1 * 0x10 + *(int *)ptVar5;
    iVar7 = (int)pIVar2 - (int)param_1;
    piVar9 = local_34 + (int)(pIVar2 + (-6 - (int)param_1));
    do {
      *piVar9 = iVar8;
      iVar8 = iVar8 + 0x10;
      piVar9 = piVar9 + -1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  iVar8 = -0x7ffdfffd;
  if (param_9 == (uint *)0x0) {
    param_9 = (uint *)&param_5;
  }
  if (param_7 == (tagVARIANT *)0x0) {
    param_7 = (tagVARIANT *)local_34;
  }
  Ordinal_8(local_14);
  switch(param_2) {
  case -0x139a:
    if (*(int *)(ptVar5 + 8) == 1) {
      iVar8 = (**(code **)(*(int *)pIVar4 + 100))
                        (pIVar4,*(undefined4 *)local_48[0],*(undefined4 *)(local_48[0] + 2),
                         *(undefined4 *)(local_48[0] + 4),*(undefined4 *)(local_48[0] + 6));
      goto switchD_1000e63f_default;
    }
    break;
  case -0x1399:
    if (*(int *)(ptVar5 + 8) == 2) {
      if (*local_48[0] != 3) {
        iVar8 = Ordinal_12(local_14,local_48[0],0,3);
        if (iVar8 < 0) goto LAB_1000e87b;
        local_48[0] = local_14;
      }
      _param_5 = *(uint *)(local_48[0] + 4);
      if (*local_48[1] != 3) {
        iVar8 = Ordinal_12(local_14,local_48[1],0,3);
        if (iVar8 < 0) {
LAB_1000ea62:
          *param_9 = 1;
          goto switchD_1000e63f_default;
        }
        local_48[1] = local_14;
      }
      iVar8 = (**(code **)(*(int *)pIVar4 + 0x60))
                        (pIVar4,_param_5,*(undefined4 *)(local_48[1] + 4),param_7);
      goto switchD_1000e63f_default;
    }
    break;
  case -0x1398:
    if (*(int *)(ptVar5 + 8) == 2) {
      if (*local_48[0] != 3) {
        iVar8 = Ordinal_12(local_14,local_48[0],0,3);
        if (iVar8 < 0) goto LAB_1000e87b;
        local_48[0] = local_14;
      }
      iVar8 = (**(code **)(*(int *)pIVar4 + 0x5c))
                        (pIVar4,*(undefined4 *)(local_48[0] + 4),*(undefined4 *)local_48[1],
                         *(undefined4 *)(local_48[1] + 2),*(undefined4 *)(local_48[1] + 4),
                         *(undefined4 *)(local_48[1] + 6),param_7);
      goto switchD_1000e63f_default;
    }
    break;
  case -0x1397:
    if (*(int *)(ptVar5 + 8) == 5) {
      uVar10 = 0;
      do {
        puVar6 = local_48[uVar10];
        uVar1 = *puVar6;
        if (((uVar1 & 0x4000) == 0) || ((uVar1 & 0xf) == 0)) {
          iVar8 = -0x7ffdfffb;
          *param_9 = uVar10;
          goto switchD_1000e63f_default;
        }
        if ((uVar1 & 0xc) == 0) {
          iVar8 = *(int *)(puVar6 + 4);
        }
        else {
          Ordinal_9(*(undefined4 *)(puVar6 + 4));
          **(undefined2 **)(puVar6 + 4) = 3;
          iVar8 = *(int *)(puVar6 + 4) + 8;
        }
        local_24[uVar10] = iVar8;
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < 4);
      iVar8 = (**(code **)(*(int *)pIVar4 + 0x58))
                        (pIVar4,local_24[0],local_24[1],local_24[2],local_24[3],*local_38,
                         local_38[1],local_38[2],local_38[3]);
      goto switchD_1000e63f_default;
    }
    break;
  case -0x1396:
    if (*(int *)(ptVar5 + 8) == 2) {
      if (*local_48[0] != 3) {
        iVar8 = Ordinal_12(local_14,local_48[0],0,3);
        if (iVar8 < 0) goto LAB_1000e87b;
        local_48[0] = local_14;
      }
      iVar8 = (**(code **)(*(int *)pIVar4 + 0x54))
                        (pIVar4,*(undefined4 *)(local_48[0] + 4),*(undefined4 *)local_48[1],
                         *(undefined4 *)(local_48[1] + 2),*(undefined4 *)(local_48[1] + 4),
                         *(undefined4 *)(local_48[1] + 6));
      goto switchD_1000e63f_default;
    }
    break;
  case -0x1395:
    if (*(int *)(ptVar5 + 8) == 1) {
      iVar8 = (**(code **)(*(int *)pIVar4 + 0x50))
                        (pIVar4,*(undefined4 *)local_48[0],*(undefined4 *)(local_48[0] + 2),
                         *(undefined4 *)(local_48[0] + 4),*(undefined4 *)(local_48[0] + 6),
                         param_7 + 8);
LAB_1000e809:
      if (iVar8 < 0) goto switchD_1000e63f_default;
      uVar11 = 8;
      goto LAB_1000ead9;
    }
    break;
  case -0x1394:
    iVar8 = (**(code **)(*(int *)pIVar4 + 0x4c))(pIVar4,param_7);
    goto switchD_1000e63f_default;
  case -0x1393:
    iVar8 = (**(code **)(*(int *)pIVar4 + 0x48))(pIVar4,param_7);
    goto switchD_1000e63f_default;
  case -0x1392:
    if (*(int *)(ptVar5 + 8) == 1) {
      iVar8 = (**(code **)(*(int *)pIVar4 + 0x44))
                        (pIVar4,*(undefined4 *)local_48[0],*(undefined4 *)(local_48[0] + 2),
                         *(undefined4 *)(local_48[0] + 4),*(undefined4 *)(local_48[0] + 6),
                         param_7 + 8);
      goto LAB_1000e809;
    }
    break;
  case -0x1391:
    if (*(int *)(ptVar5 + 8) == 2) {
      uVar1 = *local_48[0];
      if (((uVar1 & 0x4000) != 0) && ((uVar1 & 0xc) == 0)) {
        iVar8 = -0x7ffdfffb;
LAB_1000e87b:
        *param_9 = 0;
        goto switchD_1000e63f_default;
      }
      if (uVar1 == 0x400c) {
        Ordinal_9(*(undefined4 *)(local_48[0] + 4));
        **(undefined2 **)(local_48[0] + 4) = 8;
        puVar6 = (ushort *)(*(int *)(local_48[0] + 4) + 8);
      }
      else if (uVar1 == 0x4008) {
        puVar6 = *(ushort **)(local_48[0] + 4);
      }
      else {
        Ordinal_9(local_48[0]);
        puVar6 = local_48[0] + 4;
        *local_48[0] = 8;
      }
      iVar8 = (**(code **)(*(int *)pIVar4 + 0x40))
                        (pIVar4,puVar6,*(undefined4 *)local_48[1],*(undefined4 *)(local_48[1] + 2),
                         *(undefined4 *)(local_48[1] + 4),*(undefined4 *)(local_48[1] + 6),
                         param_7 + 8);
      goto LAB_1000e8e2;
    }
    break;
  case -0x1390:
    if (*(int *)(ptVar5 + 8) == 1) {
      iVar8 = (**(code **)(*(int *)pIVar4 + 0x3c))
                        (pIVar4,*(undefined4 *)local_48[0],*(undefined4 *)(local_48[0] + 2),
                         *(undefined4 *)(local_48[0] + 4),*(undefined4 *)(local_48[0] + 6),
                         param_7 + 8);
      goto LAB_1000e809;
    }
    break;
  case -0x138f:
    if (*(int *)(ptVar5 + 8) == 1) {
      iVar8 = (**(code **)(*(int *)pIVar4 + 0x38))
                        (pIVar4,*(undefined4 *)local_48[0],*(undefined4 *)(local_48[0] + 2),
                         *(undefined4 *)(local_48[0] + 4),*(undefined4 *)(local_48[0] + 6),param_7);
      goto switchD_1000e63f_default;
    }
    break;
  case -0x138e:
    if (*(int *)(ptVar5 + 8) == 1) {
      iVar8 = (**(code **)(*(int *)pIVar4 + 0x34))
                        (pIVar4,*(undefined4 *)local_48[0],*(undefined4 *)(local_48[0] + 2),
                         *(undefined4 *)(local_48[0] + 4),*(undefined4 *)(local_48[0] + 6),param_7);
      goto switchD_1000e63f_default;
    }
    break;
  case -0x138d:
    if (*(int *)(ptVar5 + 8) == 1) {
      iVar8 = (**(code **)(*(int *)pIVar4 + 0x30))
                        (pIVar4,*(undefined4 *)local_48[0],*(undefined4 *)(local_48[0] + 2),
                         *(undefined4 *)(local_48[0] + 4),*(undefined4 *)(local_48[0] + 6),
                         param_7 + 8);
      goto LAB_1000e809;
    }
    break;
  case -0x138c:
    if ((_param_5 & 2) == 0) {
      if ((_param_5 & 4) == 0) goto switchD_1000e63f_caseD_ffffec75;
      if (*(int *)(ptVar5 + 8) == 2) {
        local_24[0] = *(int *)local_48[0];
        local_24[1] = *(int *)(local_48[0] + 2);
        local_24[2] = *(int *)(local_48[0] + 4);
        local_24[3] = *(int *)(local_48[0] + 6);
        if (*local_48[1] != 8) {
          iVar8 = Ordinal_12(local_14,local_48[1],0,3);
          if (iVar8 < 0) goto LAB_1000ea62;
          local_48[1] = local_14;
        }
        iVar8 = (**(code **)(*(int *)pIVar4 + 0x6c))
                          (pIVar4,local_24[0],local_24[1],local_24[2],local_24[3],
                           *(undefined4 *)(local_48[1] + 4));
        goto switchD_1000e63f_default;
      }
    }
    else if (*(int *)(ptVar5 + 8) == 1) {
      iVar8 = (**(code **)(*(int *)pIVar4 + 0x2c))
                        (pIVar4,*(undefined4 *)local_48[0],*(undefined4 *)(local_48[0] + 2),
                         *(undefined4 *)(local_48[0] + 4),*(undefined4 *)(local_48[0] + 6),
                         param_7 + 8);
      goto LAB_1000e809;
    }
    break;
  case -0x138b:
switchD_1000e63f_caseD_ffffec75:
    if ((_param_5 & 2) == 0) {
      if ((_param_5 & 4) == 0) goto switchD_1000e63f_caseD_ffffec76;
      if (*(int *)(ptVar5 + 8) == 2) {
        local_24[0] = *(int *)local_48[0];
        local_24[1] = *(int *)(local_48[0] + 2);
        local_24[2] = *(int *)(local_48[0] + 4);
        local_24[3] = *(int *)(local_48[0] + 6);
        if (*local_48[1] != 8) {
          iVar8 = Ordinal_12(local_14,local_48[1],0,3);
          if (iVar8 < 0) goto LAB_1000ea62;
          local_48[1] = local_14;
        }
        iVar8 = (**(code **)(*(int *)pIVar4 + 0x68))
                          (pIVar4,local_24[0],local_24[1],local_24[2],local_24[3],
                           *(undefined4 *)(local_48[1] + 4));
        goto switchD_1000e63f_default;
      }
    }
    else if (*(int *)(ptVar5 + 8) == 1) {
      iVar8 = (**(code **)(*(int *)pIVar4 + 0x28))
                        (pIVar4,*(undefined4 *)local_48[0],*(undefined4 *)(local_48[0] + 2),
                         *(undefined4 *)(local_48[0] + 4),*(undefined4 *)(local_48[0] + 6),
                         param_7 + 8);
      goto LAB_1000e809;
    }
    break;
  case -0x138a:
switchD_1000e63f_caseD_ffffec76:
    if (*(int *)(ptVar5 + 8) == 1) {
      iVar8 = (**(code **)(*(int *)pIVar4 + 0x24))
                        (pIVar4,*(undefined4 *)local_48[0],*(undefined4 *)(local_48[0] + 2),
                         *(undefined4 *)(local_48[0] + 4),*(undefined4 *)(local_48[0] + 6),
                         param_7 + 8);
      goto LAB_1000ead1;
    }
    break;
  case -0x1389:
    iVar8 = (**(code **)(*(int *)pIVar4 + 0x20))(pIVar4,param_7 + 8);
LAB_1000e8e2:
    if (iVar8 < 0) goto switchD_1000e63f_default;
    uVar11 = 3;
    goto LAB_1000ead9;
  case -5000:
    iVar8 = (**(code **)(*(int *)pIVar4 + 0x1c))(pIVar4,param_7 + 8);
LAB_1000ead1:
    if (iVar8 < 0) goto switchD_1000e63f_default;
    uVar11 = 9;
LAB_1000ead9:
    *(undefined2 *)param_7 = uVar11;
  default:
    goto switchD_1000e63f_default;
  }
  iVar8 = -0x7ffdfff2;
switchD_1000e63f_default:
  Ordinal_9(local_14);
  return iVar8;
}

