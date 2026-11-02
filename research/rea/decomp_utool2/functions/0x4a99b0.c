// rea decompile_all
// name: FUN_004a99b0
// address: 0x4a99b0
// body: available
// range: 0x4a99b0-0x4aa01f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_004a99b0(HWND param_1,uint param_2,uint param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  HWND pHVar3;
  uint uVar4;
  short sVar5;
  int *in_ECX;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  short sVar6;
  
  if (0x100 < param_2) {
    sVar5 = (short)param_4;
    sVar6 = (short)(param_4 >> 0x10);
    if (0x200 < param_2) {
      if (param_2 < 0x31a) {
        if (param_2 == 0x319) {
          cVar1 = FUN_004a8e50(param_4);
          if (cVar1 != '\0') {
            return 1;
          }
        }
        else {
          switch(param_2) {
          case 0x201:
          case 0x204:
          case 0x207:
            FUN_004a7fe0(param_3,(float)(int)sVar5,(float)(int)sVar6);
            return 0;
          case 0x202:
          case 0x205:
          case 0x208:
            FUN_004a80a0(param_3,(float)(int)sVar5,(float)(int)sVar6);
            return 0;
          case 0x20a:
            FUN_004a8370(param_3,1);
            return 0;
          case 0x20e:
            FUN_004a8370(param_3,0);
            return 0;
          case 0x214:
            uVar4 = FUN_004a8f60(param_4,param_3);
            return uVar4;
          case 0x215:
            FUN_004a8140();
            return 0;
          case 0x218:
            FUN_004a95a0(param_3);
            break;
          case 0x240:
            if (DAT_00c8a688 != 0) {
              uVar4 = FUN_004a85b0(param_3,param_4);
              return uVar4;
            }
            break;
          case 0x281:
            FUN_004aa2e0(param_1,param_3 == 1);
            param_4 = param_4 & 0x7fffffff;
            break;
          case 0x2a3:
            FUN_004a8260();
            return 0;
          }
        }
      }
      goto switchD_004a99e9_caseD_9;
    }
    if (param_2 == 0x200) {
      FUN_004a7de0(0,(float)(int)sVar5,(float)(int)sVar6);
      return 0;
    }
    switch(param_2) {
    case 0x101:
    case 0x105:
      cVar1 = FUN_004a88b0(param_3);
      if (cVar1 != '\0') {
        return 0;
      }
      goto LAB_004a9c77;
    case 0x102:
      cVar1 = FUN_004a8d10(param_3,param_4);
      if (cVar1 != '\0') {
        return 0;
      }
LAB_004a9c77:
      FUN_004a8e20(param_2,param_3,param_4);
      break;
    case 0x104:
      goto switchD_004a9c11_caseD_104;
    case 0x10d:
      FUN_004aa320(in_ECX);
      return 0;
    case 0x10e:
      FUN_004aa3b0(in_ECX,param_1);
      break;
    case 0x10f:
      FUN_004aa4d0(in_ECX,param_1,param_4);
      return 0;
    case 0x112:
      uVar4 = param_3 & 0xfff0;
      if (uVar4 < 0xf061) {
        if (uVar4 == 0xf060) {
          cVar1 = FUN_004aa280();
          if (cVar1 != '\0') {
            return 0;
          }
          if (((uint)in_ECX[2] >> 3 & 1) != 0) {
            PostMessageW(param_1,0x10,0,0);
            return 0;
          }
        }
        else if (uVar4 == 0xf020) {
          cVar1 = FUN_004aa280();
          if (cVar1 != '\0') {
            return 0;
          }
          if (((uint)in_ECX[2] >> 3 & 1) == 0) {
            (**(code **)(*in_ECX + 0x30))(1);
            return 0;
          }
        }
        else if (uVar4 == 0xf030) {
          cVar1 = FUN_004aa280();
          if (cVar1 != '\0') {
            return 0;
          }
          (**(code **)(*in_ECX + 0x38))(1);
          return 0;
        }
      }
      else if (uVar4 == 0xf100) {
        if ((int)(param_4 & 0xffff0000) < 1) {
          return 0;
        }
        if ((((uint)in_ECX[2] >> 3 & 1) != 0) && (pHVar3 = GetCapture(), param_1 == pHVar3)) {
          ReleaseCapture();
        }
      }
      else if (uVar4 == 0xf120) {
        cVar1 = FUN_004aa280();
        if (cVar1 != '\0') {
          return 0;
        }
        if (((uint)in_ECX[2] >> 3 & 1) == 0) {
          cVar1 = (**(code **)(*in_ECX + 0x34))();
          if (cVar1 != '\0') {
            (**(code **)(*in_ECX + 0x30))(0);
            return 0;
          }
          cVar1 = (**(code **)(*in_ECX + 0x3c))();
          if (cVar1 == '\0') {
            return 0;
          }
          (**(code **)(*in_ECX + 0x38))(0);
          return 0;
        }
        cVar1 = (**(code **)(*in_ECX + 0x3c))();
        if (cVar1 != '\0') {
          (**(code **)(*in_ECX + 0x38))(0);
          return 0;
        }
      }
      break;
    case 0x116:
      FUN_004a9660(param_3);
      break;
    case 0x119:
      cVar1 = FUN_004a84b0(param_4);
      if (cVar1 != '\0') {
        return 0;
      }
      break;
    case 0x120:
      return 0x10000;
    }
    goto switchD_004a99e9_caseD_9;
  }
  if (param_2 == 0x100) {
switchD_004a9c11_caseD_104:
    cVar1 = FUN_004a8a20(param_3);
    if (cVar1 != '\0') {
      return 0;
    }
    pHVar3 = GetParent((HWND)in_ECX[0xe]);
    if (pHVar3 != (HWND)0x0) {
      PostMessageW(pHVar3,param_2,param_3,param_4);
    }
    goto switchD_004a99e9_caseD_9;
  }
  switch(param_2) {
  case 6:
    if (((short)param_3 == 1) || ((short)param_3 == 2)) {
      FUN_004a93c0(param_3);
      return 0;
    }
    break;
  case 7:
    FUN_004a63b0();
    FUN_0068cce0();
    break;
  case 8:
    if (*(char *)((int)in_ECX + 0x5b) != '\0') {
      *(undefined1 *)((int)in_ECX + 0x5b) = 0;
      DestroyCaret();
    }
    FUN_0068cb90();
    break;
  case 0xf:
    FUN_004a77d0();
    return 0;
  case 0x10:
    cVar1 = FUN_006ceda0();
    if (cVar1 != '\0') {
      return 0;
    }
    FUN_0068c1f0();
    return 0;
  case 0x11:
    if (DAT_00c8a660 == (int *)0x0) {
      return 1;
    }
    (**(code **)(*DAT_00c8a660 + 0x1c))();
    iVar2 = FUN_0063e2f0();
    return (uint)*(byte *)(iVar2 + 4);
  case 0x14:
  case 0x83:
    uVar4 = in_ECX[2];
    goto LAB_004a9a3a;
  case 0x18:
    if (param_3 != 0) {
      (**(code **)(*(int *)in_ECX[1] + 0x28))(1);
      FUN_0068d070();
    }
    break;
  case 0x1c:
    if (param_3 == 0) {
      FUN_006e5f70();
      FUN_006ca890(in_stack_ffffffe0,in_stack_ffffffe4);
    }
    if (DAT_00c8a6a8 != 0) {
      FUN_004a4bc0();
    }
    DAT_00c8a9b0 = 0xffffffff;
    return 0;
  case 0x21:
    if (0x7f < *(byte *)(in_ECX[1] + 0x68)) {
      return 3;
    }
    break;
  case 0x46:
    uVar4 = FUN_004a9120(param_4);
    return uVar4;
  case 0x47:
    cVar1 = FUN_004a9300();
    if (cVar1 != '\0') {
      return 0;
    }
    break;
  case 0x7e:
    InvalidateRect(param_1,(RECT *)0x0,0);
  case 0x1a:
    FUN_004a9720();
    break;
  case 0x84:
    uVar4 = in_ECX[2];
    if ((uVar4 & 4) != 0) {
      return 0xffffffff;
    }
LAB_004a9a3a:
    if ((uVar4 >> 3 & 1) == 0) {
      return 1;
    }
    break;
  case 0x85:
    if (param_3 != 1) {
      FUN_004a77d0();
    }
  case 0xa0:
    if (((uint)in_ECX[2] >> 3 & 1) == 0) {
      return 0;
    }
    break;
  case 0x86:
    if ((param_3 == 0) && (DAT_00c7eb78 == '\0')) {
      param_3 = 1;
    }
    break;
  case 0x87:
    return 4;
  case 0x88:
    return 0;
  case 0xa1:
    FUN_004a9610(param_3);
    break;
  case 0xa4:
  case 0xa7:
    FUN_004aa280();
  }
switchD_004a99e9_caseD_9:
  uVar4 = DefWindowProcW(param_1,param_2,param_3,param_4);
  return uVar4;
}

