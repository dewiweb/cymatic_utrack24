// rea decompile_all
// name: CMFCRibbonPanel::Reposition
// address: 0x100b462c
// body: available
// range: 0x100b462c-0x100b5cb6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100b4870 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* WARNING: Type propagation algorithm not settling */
/* Library Function - Single Match
    protected: virtual void __thiscall CMFCRibbonPanel::Reposition(class CDC *,class CRect const &)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCRibbonPanel::Reposition(CMFCRibbonPanel *this,CDC *param_1,CRect *param_2)

{
  int iVar1;
  int *piVar2;
  BOOL BVar3;
  int iVar4;
  CDC *pCVar5;
  int iVar6;
  tagRECT *ptVar7;
  CDC *pCVar8;
  int *local_138;
  int local_134;
  undefined **local_130 [7];
  int local_114;
  undefined **local_110;
  int *local_10c;
  int local_108;
  int local_104;
  int local_100;
  int local_fc;
  int local_f8;
  int *local_f4;
  CDC *local_f0;
  tagRECT local_ec;
  int *local_dc;
  CDC *local_d8;
  CDC *local_d4;
  CDC *local_d0;
  CDC *local_cc;
  CDC *local_c8;
  CDC *local_c4;
  CDC *local_c0;
  int local_bc;
  CDC *local_b8;
  CDC *local_b4;
  int *local_b0;
  CDC *local_ac;
  CDC *local_a8;
  RECT local_a4;
  RECT local_94;
  RECT local_84;
  RECT local_74;
  RECT local_64;
  RECT local_54;
  RECT local_44;
  RECT local_34;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x148;
  local_8 = 0x100b463b;
  local_c4 = (CDC *)param_2;
  local_b8 = param_1;
  SetRectEmpty((LPRECT)(this + 0x5c));
  SetRectEmpty((LPRECT)(this + 0x7c));
  SetRectEmpty((LPRECT)(this + 0x8c));
  if (*(int *)(this + 0xb0) != 0) {
    (**(code **)(*(int *)this + 0x50))(param_1,local_c4);
    goto LAB_100b5caf;
  }
  if (*(int *)(this + 0x1c) != 0) {
    (**(code **)(*(int *)this + 0x4c))(param_1,local_c4);
    goto LAB_100b5caf;
  }
  *(undefined4 *)(this + 0xe4) = *(undefined4 *)(this + 0xa8);
  (**(code **)(*(int *)(this + 0xb8) + 0xe0))(param_1);
  piVar2 = (int *)(**(code **)(*(int *)(this + 0xb8) + 0x54))(&local_ec.right,param_1);
  local_114 = *piVar2;
  *(int *)(this + 0x6c) = *(int *)local_c4;
  *(int *)(this + 0x70) = *(int *)(local_c4 + 4);
  *(int *)(this + 0x74) = *(int *)(local_c4 + 8);
  *(int *)(this + 0x78) = *(int *)(local_c4 + 0xc);
  if (*(int *)(this + 8) != 0) {
    FUN_100b34a8(this,local_b8);
    goto LAB_100b5caf;
  }
  local_ec.left = 0;
  local_ec.top = 0;
  local_ec.right = 0;
  local_ec.bottom = 0;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0xd4) = 0;
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 4) = 1;
  GetCaptionSize(this,(CDC *)&local_fc);
  if (*(int *)(this + 0x40) == 0) {
    iVar4 = *(int *)(local_c4 + 8) - *(int *)local_c4;
    if (*(int *)(local_c4 + 8) - *(int *)local_c4 <= local_fc) {
      iVar4 = local_fc;
    }
    *(int *)(this + 0x74) = *(int *)(this + 0x6c) + iVar4;
  }
  local_f4 = (int *)((*(int *)(local_c4 + 8) - *(int *)local_c4) - *(int *)(this + 0x50));
  local_f0 = (CDC *)(((*(int *)(local_c4 + 0xc) - *(int *)(local_c4 + 4)) - *(int *)(this + 0x54)) -
                    local_f8);
  local_ac = (CDC *)0x0;
  if (0 < *(int *)(this + 0x25c)) {
    do {
      if (((int)local_ac < 0) || (*(int *)(this + 0x25c) <= (int)local_ac)) goto LAB_100b4870;
      piVar2 = *(int **)(*(int *)(this + 600) + (int)local_ac * 4);
      (**(code **)(*piVar2 + 0xe0))(local_b8);
      if (*(int *)(this + 0x24) == 0) {
        (**(code **)(*piVar2 + 0x6c))(0);
      }
      else {
        (**(code **)(*piVar2 + 0x48))(1);
      }
      iVar4 = *(int *)(this + 0x24);
      piVar2[0x13] = -1;
      local_ac = local_ac + 1;
      piVar2[0x19] = iVar4;
    } while ((int)local_ac < *(int *)(this + 0x25c));
  }
  local_b4 = (CDC *)0x0;
  local_c0 = (CDC *)0x0;
  if ((*(int *)(this + 0x14) != 0) && (*(int *)(this + 0x24) == 0)) {
    do {
      local_ac = (CDC *)0x0;
      local_b4 = (CDC *)0x0;
      local_c0 = (CDC *)0x0;
      CMap<int,int,int,int>::CMap<int,int,int,int>((CMap<int,int,int,int> *)local_130,10);
      local_8 = 1;
      local_a8 = (CDC *)0x0;
      if (0 < *(int *)(this + 0x25c)) {
        do {
          if (((int)local_a8 < 0) || (*(int *)(this + 0x25c) <= (int)local_a8)) goto LAB_100b4870;
          piVar2 = *(int **)(*(int *)(this + 600) + (int)local_a8 * 4);
          (**(code **)(*piVar2 + 0x50))(&local_d8,local_b8);
          if ((local_d8 == (CDC *)0x0) && (local_d4 == (CDC *)0x0)) {
            local_ec.left = 0;
            local_ec.top = 0;
            local_ec.right = 0;
            local_ec.bottom = 0;
            piVar2[6] = 0;
            piVar2[7] = 0;
            piVar2[8] = 0;
            piVar2[9] = 0;
          }
          else {
            iVar4 = (**(code **)(*piVar2 + 0x74))();
            if (iVar4 == 0) {
              iVar4 = (**(code **)(*piVar2 + 0xa4))();
              if (iVar4 != 0) {
                local_d4 = local_f0;
              }
              if ((int)local_f0 < (int)(local_d4 + (int)local_c0)) {
                if (local_c0 == (CDC *)0x0) goto LAB_100b508f;
                local_b4 = local_b4 + (int)local_ac;
                local_c0 = (CDC *)0x0;
                local_ac = (CDC *)0x0;
              }
              local_c8 = local_b4 + *(int *)local_c4 + *(int *)(this + 0x50);
              local_24.top = (LONG)(local_c0 + *(int *)(local_c4 + 4) + *(int *)(this + 0x54));
              local_24.right = (LONG)(local_d8 + (int)local_c8);
              local_24.bottom = (LONG)(local_d4 + local_24.top);
              piVar2[6] = (int)local_c8;
              piVar2[7] = local_24.top;
              piVar2[8] = local_24.right;
              piVar2[9] = local_24.bottom;
              local_bc = 1;
              local_24.left = (LONG)local_c8;
              iVar4 = CMap<int,int,int,int>::Lookup
                                ((CMap<int,int,int,int> *)local_130,(int)local_c8,&local_bc);
              if (iVar4 != 0) {
                local_bc = local_bc + 1;
              }
              piVar2 = CMap<int,int,int,int>::operator[]
                                 ((CMap<int,int,int,int> *)local_130,(int)local_c8);
              *piVar2 = local_bc;
              if ((int)local_ac <= (int)local_d8) {
                local_ac = local_d8;
              }
              local_c0 = local_c0 + (int)local_d4;
            }
            else {
              local_34.top = *(int *)(this + 0x54) + *(int *)(local_c4 + 4);
              local_34.left =
                   (LONG)(local_b4 + (int)local_ac + *(int *)local_c4 + *(int *)(this + 0x50));
              local_34.right = (LONG)(local_d8 + local_34.left);
              local_c0 = (CDC *)0x0;
              local_34.bottom = (LONG)(local_f0 + local_34.top);
              piVar2[6] = local_34.left;
              piVar2[7] = local_34.top;
              piVar2[8] = local_34.right;
              piVar2[9] = local_34.bottom;
              local_b4 = local_b4 + (int)local_ac + (int)(local_d8 + *(int *)(this + 0x50));
              local_ac = (CDC *)0x0;
            }
          }
          local_a8 = local_a8 + 1;
        } while ((int)local_a8 < *(int *)(this + 0x25c));
      }
      if ((int)(local_b4 + (int)local_ac) <= (int)local_f4) {
        local_8 = 0xffffffff;
        *(CDC **)(this + 0x48) = local_b4 + (int)local_ac;
        local_130[0] = CMap<int,int,int,int>::vftable;
        CMap<int,int,int,int>::RemoveAll((CMap<int,int,int,int> *)local_130);
        goto LAB_100b5896;
      }
      if (local_ac == (CDC *)0x0) goto LAB_100b508f;
      local_c0 = (CDC *)0x0;
      local_a8 = (CDC *)0x0;
      if (*(int *)(this + 0x25c) < 1) {
LAB_100b4b5d:
        local_a8 = *(CDC **)(this + 0x25c);
        local_b4 = (CDC *)0x0;
        local_d0 = (CDC *)0x3;
        if ((int)local_a8 < 4) {
          local_d0 = local_a8;
        }
        local_a8 = local_a8 + -1;
        do {
          if ((int)local_a8 < 0) break;
          if (*(int *)(this + 0x25c) <= (int)local_a8) goto LAB_100b4870;
          local_b0 = *(int **)(*(int *)(this + 600) + (int)local_a8 * 4);
          local_84.left = local_b0[6];
          local_84.top = local_b0[7];
          local_84.right = local_b0[8];
          local_84.bottom = local_b0[9];
          BVar3 = IsRectEmpty(&local_84);
          if (BVar3 == 0) {
            if (((local_b0[0x17] == 0) && (local_b0[0x18] == 0)) &&
               (iVar4 = (**(code **)(*local_b0 + 0x4c))(), iVar4 != 0)) {
              local_b4 = local_b4 + 1;
              if (local_b4 == local_d0) {
                local_cc = (CDC *)0x0;
                local_c0 = (CDC *)0x1;
                if (0 < (int)local_b4) {
                  local_ac = local_a8;
                  do {
                    if (((int)local_ac < 0) || (*(int *)(this + 0x25c) <= (int)local_ac))
                    goto LAB_100b4870;
                    local_b0 = *(int **)(*(int *)(this + 600) + (int)local_ac * 4);
                    local_94.left = local_b0[6];
                    local_94.top = local_b0[7];
                    local_94.right = local_b0[8];
                    local_94.bottom = local_b0[9];
                    BVar3 = IsRectEmpty(&local_94);
                    if (BVar3 == 0) {
                      (**(code **)(*local_b0 + 0x48))(1);
                    }
                    else {
                      local_cc = local_cc + 1;
                      local_ac = local_ac + 1;
                    }
                    local_cc = local_cc + 1;
                    local_ac = local_ac + 1;
                  } while ((int)local_cc < (int)local_b4);
                }
              }
            }
            else {
              local_b4 = (CDC *)0x0;
            }
          }
          local_a8 = local_a8 + -1;
        } while (local_c0 == (CDC *)0x0);
        if (local_c0 == (CDC *)0x0) {
          local_bc = 0;
          local_b0 = (int *)0xffffffff;
          local_a8 = (CDC *)(*(int *)(this + 0x25c) + -1);
          do {
            if ((int)local_a8 < 0) break;
            if (*(int *)(this + 0x25c) <= (int)local_a8) goto LAB_100b4870;
            local_cc = *(CDC **)(*(int *)(this + 600) + (int)local_a8 * 4);
            local_a4.left = *(LONG *)(local_cc + 0x18);
            local_a4.top = *(LONG *)(local_cc + 0x1c);
            local_a4.right = *(LONG *)(local_cc + 0x20);
            local_a4.bottom = *(LONG *)(local_cc + 0x24);
            BVar3 = IsRectEmpty(&local_a4);
            if (BVar3 == 0) {
              if ((local_b0 == (int *)0xffffffff) || (*(int **)(local_cc + 0x18) == local_b0)) {
                local_10c = *(int **)(local_cc + 0x18);
                local_108 = *(int *)(local_cc + 0x1c);
                local_104 = *(int *)(local_cc + 0x20);
                local_100 = *(int *)(local_cc + 0x24);
                if ((*(int *)(local_cc + 0x60) != 0) &&
                   (local_b0 = local_10c, iVar4 = (**(code **)(*(int *)local_cc + 0x68))(),
                   iVar4 != 0)) {
                  local_bc = local_bc + 1;
                  if (local_bc == 3) {
                    local_b4 = (CDC *)0x0;
                    local_c0 = (CDC *)0x1;
                    local_ac = local_a8;
                    do {
                      if (((int)local_ac < 0) || (*(int *)(this + 0x25c) <= (int)local_ac))
                      goto LAB_100b4870;
                      local_cc = *(CDC **)(*(int *)(this + 600) + (int)local_ac * 4);
                      local_64.left = *(LONG *)(local_cc + 0x18);
                      local_64.top = *(LONG *)(local_cc + 0x1c);
                      local_64.right = *(LONG *)(local_cc + 0x20);
                      local_64.bottom = *(LONG *)(local_cc + 0x24);
                      BVar3 = IsRectEmpty(&local_64);
                      if (BVar3 == 0) {
                        (**(code **)(*(int *)local_cc + 0x48))(1);
                      }
                      else {
                        local_b4 = local_b4 + 1;
                        local_ac = local_ac + 1;
                      }
                      local_b4 = local_b4 + 1;
                      local_ac = local_ac + 1;
                    } while ((int)local_b4 < 3);
                  }
                  goto LAB_100b4e6f;
                }
              }
              local_bc = 0;
              local_b0 = (int *)0xffffffff;
            }
LAB_100b4e6f:
            local_a8 = local_a8 + -1;
          } while (local_c0 == (CDC *)0x0);
          if (local_c0 == (CDC *)0x0) {
            local_c8 = (CDC *)(uint)(2 < *(int *)(this + 0x25c));
            local_a8 = local_c8;
            if ((int)local_c8 < *(int *)(this + 0x25c)) {
              do {
                if (((int)local_a8 < 0) || (*(int *)(this + 0x25c) <= (int)local_a8))
                goto LAB_100b4870;
                local_b0 = *(int **)(*(int *)(this + 600) + (int)local_a8 * 4);
                local_74.left = local_b0[6];
                local_74.top = local_b0[7];
                local_74.right = local_b0[8];
                local_74.bottom = local_b0[9];
                BVar3 = IsRectEmpty(&local_74);
                if ((BVar3 == 0) &&
                   ((((local_b0[0x17] == 0 && (local_b0[0x18] == 0)) &&
                     (iVar4 = (**(code **)(*local_b0 + 0x4c))(), iVar4 != 0)) &&
                    ((int)local_a8 < *(int *)(this + 0x25c) + -1)))) {
                  if (((int)(local_a8 + 1) < 0) || (*(int *)(this + 0x25c) <= (int)(local_a8 + 1)))
                  goto LAB_100b4870;
                  if (*(int *)(*(int *)(*(int *)(this + 600) + 4 + (int)local_a8 * 4) + 0x60) != 0)
                  {
                    pCVar5 = local_a8 + 1;
                    local_d0 = (CDC *)0x0;
                    if (((int)pCVar5 < 0) || (*(int *)(this + 0x25c) <= (int)pCVar5))
                    goto LAB_100b4870;
                    iVar4 = CMap<int,int,int,int>::Lookup
                                      ((CMap<int,int,int,int> *)local_130,
                                       *(int *)(*(int *)(*(int *)(this + 600) + (int)pCVar5 * 4) +
                                               0x18),(int *)&local_d0);
                    if ((iVar4 != 0) && ((int)local_d0 < 3)) {
                      local_b0[0x17] = 0;
                      local_b0[0x18] = 1;
                      goto LAB_100b4b3d;
                    }
                    break;
                  }
                }
                local_a8 = local_a8 + 1;
              } while ((int)local_a8 < *(int *)(this + 0x25c));
            }
            local_a8 = local_c8;
            if (*(int *)(this + 0x25c) <= (int)local_c8) goto LAB_100b508f;
            do {
              if (((int)local_a8 < 0) || (*(int *)(this + 0x25c) <= (int)local_a8))
              goto LAB_100b4870;
              local_c8 = *(CDC **)(*(int *)(this + 600) + (int)local_a8 * 4);
              local_54.left = *(LONG *)(local_c8 + 0x18);
              local_54.top = *(LONG *)(local_c8 + 0x1c);
              local_54.right = *(LONG *)(local_c8 + 0x20);
              local_54.bottom = *(LONG *)(local_c8 + 0x24);
              BVar3 = IsRectEmpty(&local_54);
              pCVar5 = local_c8;
              if ((BVar3 == 0) &&
                 ((*(int *)(local_c8 + 0x60) != 0 &&
                  (iVar4 = (**(code **)(*(int *)local_c8 + 0x68))(), iVar4 != 0)))) {
                *(int *)(pCVar5 + 0x60) = 0;
                *(int *)(pCVar5 + 0x5c) = 1;
                local_c0 = (CDC *)0x1;
              }
              local_a8 = local_a8 + 1;
            } while ((int)local_a8 < *(int *)(this + 0x25c));
            if (local_c0 == (CDC *)0x0) goto LAB_100b508f;
          }
        }
      }
      else {
        do {
          if (local_c0 != (CDC *)0x0) goto LAB_100b4b3d;
          if (((int)local_a8 < 0) || (*(int *)(this + 0x25c) <= (int)local_a8)) goto LAB_100b4870;
          local_c8 = *(CDC **)(*(int *)(this + 600) + (int)local_a8 * 4);
          local_44.left = *(LONG *)(local_c8 + 0x18);
          local_44.top = *(LONG *)(local_c8 + 0x1c);
          local_44.right = *(LONG *)(local_c8 + 0x20);
          local_44.bottom = *(LONG *)(local_c8 + 0x24);
          BVar3 = IsRectEmpty(&local_44);
          pCVar5 = local_c8;
          if ((BVar3 == 0) && (iVar4 = (**(code **)(*(int *)local_c8 + 0xec))(), iVar4 != 0)) {
            (**(code **)(*(int *)pCVar5 + 0xf0))();
            local_c0 = (CDC *)0x1;
          }
          local_a8 = local_a8 + 1;
        } while ((int)local_a8 < *(int *)(this + 0x25c));
        if (local_c0 == (CDC *)0x0) goto LAB_100b4b5d;
      }
LAB_100b4b3d:
      local_8 = 0xffffffff;
      local_130[0] = CMap<int,int,int,int>::vftable;
      CMap<int,int,int,int>::RemoveAll((CMap<int,int,int,int> *)local_130);
    } while( true );
  }
  local_ac = (CDC *)0x0;
  local_d0 = (CDC *)(uint)(*(int *)(this + 0x78) == 0x7fff);
  local_cc = (CDC *)0x0;
  local_c8 = (CDC *)0x0;
  local_b0 = (int *)0x0;
  local_dc = local_f4;
  if ((*(int *)(this + 0x10) == 0) &&
     (iVar4 = CMap<int,int,int,int>::Lookup
                        ((CMap<int,int,int,int> *)(this + 0x224),(int)local_f4,(int *)&local_b0),
     iVar4 != 0)) {
    local_dc = local_b0;
  }
  local_110 = CArray<int,int>::vftable;
  local_10c = (int *)0x0;
  local_100 = 0;
  local_104 = 0;
  local_108 = 0;
  local_8 = 0;
  if (*(int *)(this + 0x24) == 0) {
    local_134 = 0;
    local_138 = (int *)0x0;
    local_34.right = 0;
    local_34.bottom = 0;
    local_a8 = (CDC *)0x0;
    if (0 < *(int *)(this + 0x25c)) {
      do {
        if (((int)local_a8 < 0) || (*(int *)(this + 0x25c) <= (int)local_a8)) goto LAB_100b4870;
        pCVar5 = *(CDC **)(*(int *)(this + 600) + (int)local_a8 * 4);
        local_d4 = pCVar5;
        (**(code **)(*(int *)pCVar5 + 0x50))(&local_ec.right,local_b8);
        iVar4 = (**(code **)(*(int *)pCVar5 + 0x60))();
        if ((iVar4 == 0) ||
           ((*(int *)(pCVar5 + 0x5c) != 0 || (local_bc = 1, *(int *)(pCVar5 + 0x60) != 0)))) {
          local_bc = 0;
        }
        local_b0 = (int *)0x0;
        iVar4 = (**(code **)(*(int *)pCVar5 + 0x74))();
        if ((iVar4 != 0) && ((local_134 == 0 || (local_b0 = (int *)0x1, local_138 != (int *)0x0))))
        {
          local_b0 = (int *)0x0;
        }
        if ((local_bc != 0) || (local_b0 != (int *)0x0)) {
          iVar4 = (**(code **)(*(int *)pCVar5 + 0x74))();
          if (iVar4 == 0) {
            local_34.right = local_ec.right;
            local_34.bottom = local_ec.bottom;
          }
          else if (((CDC *)local_34.right != (CDC *)0x0) || ((CDC *)local_34.bottom != (CDC *)0x0))
          {
            local_ec.bottom = local_34.bottom;
          }
          local_24.bottom = local_ec.bottom;
          if (local_d0 == (CDC *)0x0) {
            local_24.bottom = (LONG)local_f0;
          }
          local_24.top = *(LONG *)(local_c4 + 4);
          local_24.left = (LONG)(local_b4 + *(int *)local_c4 + *(int *)(this + 0x50));
          local_c0 = (CDC *)0x0;
          local_24.right = local_24.left + local_ec.right;
          local_24.bottom = local_24.bottom + local_24.top;
          *(LONG *)(local_d4 + 0x18) = local_24.left;
          *(LONG *)(local_d4 + 0x1c) = local_24.top;
          *(LONG *)(local_d4 + 0x20) = local_24.right;
          *(LONG *)(local_d4 + 0x24) = local_24.bottom;
          *(int *)(local_d4 + 0x4c) = 999;
          local_c8 = local_b4 + (int)(local_ec.right + *(int *)(this + 0x50));
          local_b4 = local_c8;
        }
        local_134 = local_bc;
        local_a8 = local_a8 + 1;
        local_138 = local_b0;
      } while ((int)local_a8 < *(int *)(this + 0x25c));
    }
  }
  local_a8 = (CDC *)0x0;
  if (0 < *(int *)(this + 0x25c)) {
    do {
      if (((int)local_a8 < 0) || (*(int *)(this + 0x25c) <= (int)local_a8)) goto LAB_100b4870;
      piVar2 = *(int **)(*(int *)(this + 600) + (int)local_a8 * 4);
      local_b0 = piVar2;
      (**(code **)(*piVar2 + 0x50))(&local_d8,local_b8);
      if ((local_d8 == (CDC *)0x0) && (local_d4 == (CDC *)0x0)) {
        local_24.left = 0;
        local_24.top = 0;
        local_24.right = 0;
        local_24.bottom = 0;
        ptVar7 = &local_24;
LAB_100b5382:
        local_b0[6] = ptVar7->left;
        local_b0[7] = ptVar7->top;
        local_b0[8] = ptVar7->right;
        local_b0[9] = ptVar7->bottom;
      }
      else if (piVar2[0x13] == -1) {
        iVar4 = (**(code **)(*local_b0 + 0x74))();
        pCVar5 = local_c8;
        if (iVar4 != 0) {
          local_ec.left = 0;
          local_ec.top = 0;
          local_ec.right = 0;
          local_ec.bottom = 0;
          ptVar7 = &local_ec;
          goto LAB_100b5382;
        }
        pCVar8 = local_c0;
        if ((int)local_dc < (int)(local_d8 + *(int *)(this + 0x50) + -1 + (int)local_b4)) {
          if (local_b4 != local_c8) {
            pCVar8 = local_c0 + (int)local_ac;
            if (*(int *)(this + 0x24) != 0) {
              pCVar8 = pCVar8 + *(int *)(this + 0x54);
            }
            local_c0 = pCVar8;
            CArray<int,int>::SetAtGrow((CArray<int,int> *)&local_110,local_108,(int)local_b4);
            *(int *)(this + 0x4c) = *(int *)(this + 0x4c) + 1;
            local_ac = (CDC *)0x0;
            local_b4 = pCVar5;
            goto LAB_100b5443;
          }
        }
        else {
LAB_100b5443:
          if ((int)(local_d4 + (int)pCVar8) <= (int)local_f0) {
            local_34.top = (LONG)(local_c0 + *(int *)(local_c4 + 4) + *(int *)(this + 0x54));
            local_34.left = (LONG)(local_b4 + *(int *)local_c4 + *(int *)(this + 0x50));
            local_34.right = local_34.left + (int)local_d8;
            local_34.bottom = (LONG)(local_d4 + local_34.top);
            local_b0[6] = local_34.left;
            local_b0[7] = local_34.top;
            local_b0[8] = local_34.right;
            local_b0[9] = local_34.bottom;
            local_b0[0x13] = *(int *)(this + 0x4c);
            if ((int)local_ac <= (int)local_d4) {
              local_ac = local_d4;
            }
            local_b4 = local_b4 + -1 + (int)(local_d8 + *(int *)(this + 0x50));
            pCVar5 = local_b4 + -1;
            if ((int)(local_b4 + -1) < (int)*(CDC **)(this + 0x48)) {
              pCVar5 = *(CDC **)(this + 0x48);
            }
            *(CDC **)(this + 0x48) = pCVar5;
            if ((int)local_cc <= local_34.bottom) {
              local_cc = (CDC *)local_34.bottom;
            }
            goto LAB_100b54e3;
          }
        }
        FUN_100b34a8(this,local_b8);
        local_8 = 0xffffffff;
        FUN_1006d048(&local_110);
        goto LAB_100b5caf;
      }
LAB_100b54e3:
      local_a8 = local_a8 + 1;
    } while ((int)local_a8 < *(int *)(this + 0x25c));
  }
  CArray<int,int>::SetAtGrow((CArray<int,int> *)&local_110,local_108,(int)local_b4);
  *(int *)(this + 0x4c) = *(int *)(this + 0x4c) + 1;
  if (local_d0 != (CDC *)0x0) {
    *(CDC **)(this + 0x78) = local_cc + local_f8 + *(int *)(this + 0x54);
    local_f0 = local_cc + local_f8 + *(int *)(this + 0x54) +
               ((-*(int *)(this + 0x54) - *(int *)(this + 0x70)) - local_f8);
  }
  if ((*(int *)(this + 0x28) == 0) && (1 < *(int *)(this + 0x4c))) {
    local_dc = (int *)0x0;
    while( true ) {
      local_b8 = (CDC *)0xffffffff;
      pCVar5 = (CDC *)0x0;
      local_b0 = (int *)0x0;
      if (local_108 < 1) break;
      do {
        if (((int)pCVar5 < 0) || (local_108 <= (int)pCVar5)) goto LAB_100b4870;
        if ((int)local_b0 < local_10c[(int)pCVar5]) {
          local_b8 = pCVar5;
          local_b0 = (int *)local_10c[(int)pCVar5];
        }
        pCVar5 = pCVar5 + 1;
      } while ((int)pCVar5 < local_108);
      if ((int)local_b8 < 0) break;
      local_bc = 9999;
      local_c4 = (CDC *)0x0;
      local_a8 = (CDC *)0x0;
      if (*(int *)(this + 0x25c) < 1) break;
      do {
        if (((int)local_a8 < 0) || (*(int *)(this + 0x25c) <= (int)local_a8)) goto LAB_100b4870;
        local_c8 = *(CDC **)(*(int *)(this + 600) + (int)local_a8 * 4);
        if (*(CDC **)(local_c8 + 0x4c) == local_b8) {
          local_34.left = *(LONG *)(local_c8 + 0x18);
          local_34.top = *(LONG *)(local_c8 + 0x1c);
          local_34.right = *(LONG *)(local_c8 + 0x20);
          local_34.bottom = *(LONG *)(local_c8 + 0x24);
          BVar3 = IsRectEmpty(&local_34);
          if ((BVar3 == 0) && (local_34.right - local_34.left < local_bc)) {
            local_c4 = local_c8;
            local_bc = local_34.right - local_34.left;
          }
        }
        local_a8 = local_a8 + 1;
      } while ((int)local_a8 < *(int *)(this + 0x25c));
      pCVar5 = local_b8;
      if (local_c4 == (CDC *)0x0) break;
      do {
        pCVar5 = pCVar5 + 1;
        local_a8 = pCVar5;
        if (local_108 <= (int)pCVar5) goto LAB_100b56d3;
        if ((int)pCVar5 < 0) goto LAB_100b4870;
      } while ((int)local_b0 <= local_10c[(int)pCVar5] + local_bc);
      local_cc = (CDC *)0x0;
      local_c8 = (CDC *)0x0;
      local_b0 = (int *)0x0;
      if (0 < *(int *)(this + 0x25c)) {
        do {
          if (((int)local_b0 < 0) || (*(int *)(this + 0x25c) <= (int)local_b0)) goto LAB_100b4870;
          iVar4 = *(int *)(*(int *)(this + 600) + (int)local_b0 * 4);
          if (*(CDC **)(iVar4 + 0x4c) == pCVar5) {
            local_54.left = *(int *)(iVar4 + 0x18);
            local_54.top = *(int *)(iVar4 + 0x1c);
            local_54.right = *(int *)(iVar4 + 0x20);
            local_54.bottom = *(int *)(iVar4 + 0x24);
            if ((int)local_cc < local_54.right + *(int *)(this + 0x50)) {
              local_cc = (CDC *)(*(int *)(this + 0x50) + *(int *)(iVar4 + 0x20));
            }
            local_74.left = *(int *)(iVar4 + 0x18);
            local_c8 = *(CDC **)(iVar4 + 0x1c);
            local_74.right = *(int *)(iVar4 + 0x20);
            local_74.bottom = *(int *)(iVar4 + 0x24);
            local_74.top = (LONG)local_c8;
          }
          else if (*(CDC **)(iVar4 + 0x4c) == local_b8) {
            local_d4 = (CDC *)(iVar4 + 0x18);
            local_44.left = *(LONG *)local_d4;
            local_44.top = *(int *)(iVar4 + 0x1c);
            local_44.right = *(int *)(iVar4 + 0x20);
            local_44.bottom = *(int *)(iVar4 + 0x24);
            local_64.left = *(LONG *)(local_c4 + 0x18);
            local_64.top = *(LONG *)(local_c4 + 0x1c);
            local_64.right = *(LONG *)(local_c4 + 0x20);
            local_64.bottom = *(LONG *)(local_c4 + 0x24);
            if (local_64.left < local_44.left) {
              OffsetRect(&local_44,-(*(int *)(this + 0x50) + local_bc),0);
              *(LONG *)local_d4 = local_44.left;
              *(LONG *)(local_d4 + 4) = local_44.top;
              *(LONG *)(local_d4 + 8) = local_44.right;
              *(LONG *)(local_d4 + 0xc) = local_44.bottom;
              pCVar5 = local_a8;
            }
          }
          local_b0 = (int *)((int)local_b0 + 1);
        } while ((int)local_b0 < *(int *)(this + 0x25c));
      }
      local_24.left = *(LONG *)(local_c4 + 0x18);
      local_24.top = *(LONG *)(local_c4 + 0x1c);
      local_24.right = *(LONG *)(local_c4 + 0x20);
      local_24.bottom = *(LONG *)(local_c4 + 0x24);
      local_ec.left = (LONG)local_cc;
      local_ec.right = (LONG)(local_cc + (local_24.right - local_24.left));
      local_ec.top = (LONG)local_c8;
      local_ec.bottom = (LONG)(local_c8 + (local_24.bottom - local_24.top));
      *(CDC **)(local_c4 + 0x18) = local_cc;
      *(CDC **)(local_c4 + 0x1c) = local_c8;
      *(LONG *)(local_c4 + 0x20) = local_ec.right;
      *(LONG *)(local_c4 + 0x24) = local_ec.bottom;
      *(CDC **)(local_c4 + 0x4c) = pCVar5;
      if ((((int)pCVar5 < 0) || (local_108 <= (int)pCVar5)) ||
         (local_10c[(int)pCVar5] = local_10c[(int)pCVar5] + local_bc, local_108 <= (int)local_b8))
      goto LAB_100b4870;
      local_10c[(int)local_b8] = local_10c[(int)local_b8] - local_bc;
      local_dc = (int *)0x1;
    }
LAB_100b56d3:
    iVar4 = 0;
    if (local_dc != (int *)0x0) {
      *(undefined4 *)(this + 0x48) = 0;
      if (0 < *(int *)(this + 0x25c)) {
        do {
          if ((iVar4 < 0) || (*(int *)(this + 0x25c) <= iVar4)) goto LAB_100b4870;
          iVar1 = *(int *)(*(int *)(this + 600) + iVar4 * 4);
          iVar6 = *(int *)(this + 0x48);
          local_54.left = *(int *)(iVar1 + 0x18);
          local_54.top = *(int *)(iVar1 + 0x1c);
          local_54.right = *(int *)(iVar1 + 0x20);
          local_54.bottom = *(int *)(iVar1 + 0x24);
          if (iVar6 <= local_54.right) {
            iVar6 = *(int *)(iVar1 + 0x20);
          }
          iVar4 = iVar4 + 1;
          *(int *)(this + 0x48) = iVar6;
        } while (iVar4 < *(int *)(this + 0x25c));
      }
      *(int *)(this + 0x48) =
           *(int *)(this + 0x48) - (*(int *)(this + 0x50) + *(int *)(this + 0x6c));
    }
  }
  if (((local_d0 == (CDC *)0x0) && (*(int *)(this + 0x24) == 0)) &&
     ((iVar4 = *(int *)(this + 0x4c), 1 < iVar4 &&
      ((local_c8 = (CDC *)(((int)local_f0 - iVar4 * (int)local_ac) / (iVar4 + 1)), 0 < (int)local_c8
       && (local_a8 = (CDC *)0x0, 0 < *(int *)(this + 0x25c))))))) {
    do {
      if (((int)local_a8 < 0) || (*(int *)(this + 0x25c) <= (int)local_a8)) goto LAB_100b4870;
      iVar4 = *(int *)(*(int *)(this + 600) + (int)local_a8 * 4);
      local_d4 = *(CDC **)(iVar4 + 0x4c);
      local_dc = (int *)(iVar4 + 0x18);
      local_44.left = *local_dc;
      local_44.top = *(int *)(iVar4 + 0x1c);
      local_44.right = *(int *)(iVar4 + 0x20);
      local_44.bottom = *(int *)(iVar4 + 0x24);
      if ((local_d4 != (CDC *)0x3e7) && (BVar3 = IsRectEmpty(&local_44), BVar3 == 0)) {
        OffsetRect(&local_44,0,(int)(local_d4 + 1) * (int)local_c8 - (int)local_d4);
        *local_dc = local_44.left;
        local_dc[1] = local_44.top;
        local_dc[2] = local_44.right;
        local_dc[3] = local_44.bottom;
      }
      local_a8 = local_a8 + 1;
    } while ((int)local_a8 < *(int *)(this + 0x25c));
  }
  if (((*(int *)(this + 0x28) != 0) && (0 < (int)local_ac)) && (0 < *(int *)(this + 0x25c))) {
    iVar4 = *(int *)(this + 0x25c) + -1;
    if ((iVar4 < 0) || (*(int *)(this + 0x25c) <= iVar4)) {
LAB_100b4870:
                    /* WARNING: Subroutine does not return */
      FUN_10009068();
    }
    iVar4 = *(int *)(*(int *)(this + 600) + iVar4 * 4);
    local_44.left = *(undefined4 *)(iVar4 + 0x18);
    local_44.top = *(int *)(iVar4 + 0x1c);
    local_44.right = *(int *)(iVar4 + 0x20);
    local_44.bottom = (LONG)(local_ac + local_44.top);
    *(LONG *)(iVar4 + 0x18) = local_44.left;
    *(LONG *)(iVar4 + 0x1c) = local_44.top;
    *(LONG *)(iVar4 + 0x20) = local_44.right;
    *(LONG *)(iVar4 + 0x24) = local_44.bottom;
  }
  local_8 = 0xffffffff;
  FUN_1006d048(&local_110);
LAB_100b5896:
  if (*(int *)(this + 0x24) != 0) goto LAB_100b5caf;
  if (*(int *)(this + 0x14) == 0) {
LAB_100b5bb6:
    iVar4 = *(int *)(this + 0x48) + -1;
  }
  else {
    if ((*(int *)(this + 0x18) != 0) || (*(int *)(this + 0x34) != 0)) {
      local_c4 = (CDC *)0xffffffff;
      local_ac = (CDC *)0xffffffff;
      local_d0 = (CDC *)0xffffffff;
      local_b8 = (CDC *)0x0;
      if (0 < *(int *)(this + 0x25c)) {
        do {
          if (((int)local_b8 < 0) || (*(int *)(this + 0x25c) <= (int)local_b8)) goto LAB_100b4870;
          iVar4 = *(int *)(*(int *)(this + 600) + (int)local_b8 * 4);
          local_44.left = *(undefined4 *)(iVar4 + 0x18);
          local_44.top = *(int *)(iVar4 + 0x1c);
          local_44.right = *(int *)(iVar4 + 0x20);
          local_44.bottom = *(int *)(iVar4 + 0x24);
          BVar3 = IsRectEmpty(&local_44);
          pCVar5 = local_b8;
          if (BVar3 == 0) {
            if (local_c4 == (CDC *)0xffffffff) {
              local_c4 = local_b8;
              local_ac = local_b8;
              local_d0 = (CDC *)local_44.left;
            }
            if (local_d0 != (CDC *)local_44.left) {
              if (*(int *)(this + 0x18) != 0) {
                FUN_100b35a1(this,(int)local_c4,(int)local_ac,local_f8);
              }
              if (*(int *)(this + 0x34) != 0) {
                FUN_100b3682(this,(int)local_c4,(int)local_ac);
              }
              local_c4 = pCVar5;
              local_d0 = (CDC *)local_44.left;
            }
            local_ac = pCVar5;
          }
          local_b8 = pCVar5 + 1;
        } while ((int)local_b8 < *(int *)(this + 0x25c));
      }
      if (*(int *)(this + 0x18) != 0) {
        FUN_100b35a1(this,(int)local_c4,(int)local_ac,local_f8);
      }
      if (*(int *)(this + 0x34) != 0) {
        FUN_100b3682(this,(int)local_c4,(int)local_ac);
      }
    }
    if ((*(int *)(this + 0x14) == 0) || (*(int *)(this + 0x24) != 0)) goto LAB_100b5bb6;
    iVar4 = FUN_100b3533((int)this);
  }
  if ((iVar4 < local_fc) && (*(int *)(this + 0x40) == 0)) {
    local_d4 = (CDC *)((local_fc - iVar4) / 2);
    local_bc = 0;
    iVar4 = local_fc;
    if (0 < *(int *)(this + 0x25c)) {
      do {
        if ((local_bc < 0) || (*(int *)(this + 0x25c) <= local_bc)) goto LAB_100b4870;
        iVar4 = *(int *)(*(int *)(this + 600) + local_bc * 4);
        local_c8 = (CDC *)(iVar4 + 0x18);
        local_24.left = *(LONG *)local_c8;
        local_24.top = *(int *)(iVar4 + 0x1c);
        local_24.right = *(int *)(iVar4 + 0x20);
        local_24.bottom = *(int *)(iVar4 + 0x24);
        OffsetRect(&local_24,(int)local_d4,0);
        local_bc = local_bc + 1;
        *(LONG *)local_c8 = local_24.left;
        *(LONG *)(local_c8 + 4) = local_24.top;
        *(LONG *)(local_c8 + 8) = local_24.right;
        *(LONG *)(local_c8 + 0xc) = local_24.bottom;
        iVar4 = local_fc;
      } while (local_bc < *(int *)(this + 0x25c));
    }
  }
  if (*(int *)(this + 0x25c) == 0) {
    *(int *)(this + 0x48) = *(int *)(this + 0x50) + local_114;
  }
  if (iVar4 < local_114) {
    iVar4 = *(int *)(this + 0x50) + *(int *)(this + 0x6c) + local_114;
  }
  else {
    iVar4 = iVar4 + *(int *)(this + 0x50) * 2 + *(int *)(this + 0x6c);
  }
  *(int *)(this + 0x74) = iVar4;
  if (*(int *)(this + 4) != 0) {
    *(undefined4 *)(this + 0x5c) = *(undefined4 *)(this + 0x6c);
    *(undefined4 *)(this + 0x60) = *(undefined4 *)(this + 0x70);
    *(undefined4 *)(this + 100) = *(undefined4 *)(this + 0x74);
    *(undefined4 *)(this + 0x68) = *(undefined4 *)(this + 0x78);
    *(int *)(this + 0x60) = (*(int *)(this + 0x68) - local_f8) + -1;
  }
LAB_100b5caf:
  FUN_100f90cf();
  return;
LAB_100b508f:
  FUN_100b34a8(this,local_b8);
  local_8 = 0xffffffff;
  local_130[0] = CMap<int,int,int,int>::vftable;
  CMap<int,int,int,int>::RemoveAll((CMap<int,int,int,int> *)local_130);
  goto LAB_100b5caf;
}

