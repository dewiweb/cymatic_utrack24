// rea decompile_all
// name: FUN_005390d0
// address: 0x5390d0
// body: available
// range: 0x5390d0-0x539377 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005390d0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int in_ECX;
  int iVar6;
  uint uVar7;
  TypeDescriptor *pTStack_54;
  void *local_34;
  int local_2c;
  undefined4 *local_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070dba2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar5 = (int *)(in_ECX + 0x8c);
  FUN_00415180();
  if (*(int *)(in_ECX + 0x90) != 0) {
    FID_conflict__free((void *)*piVar5);
    *piVar5 = 0;
    *(undefined4 *)(in_ECX + 0x90) = 0;
  }
  FUN_00554b70();
  local_8 = 0;
  FUN_00553460();
  local_8 = CONCAT31(local_8._1_3_,2);
  if (local_1c != (undefined4 *)0x0) {
    LOCK();
    piVar1 = local_1c + 1;
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)*local_1c)();
    }
  }
  local_18 = 0;
  if (0 < local_2c) {
    do {
      FUN_004110e0();
      FUN_0040ebf0();
      if (local_20 != (undefined4 *)0x0) {
        LOCK();
        piVar1 = local_20 + 1;
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)*local_20)();
        }
      }
      cVar3 = FUN_00557b90();
      if ((cVar3 == '\0') && (cVar3 = FUN_00557ab0(), cVar3 == '\0')) {
LAB_0053923e:
        if (local_24 != (undefined4 *)0x0) {
          LOCK();
          piVar1 = local_24 + 1;
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)*local_24)();
          }
        }
      }
      else {
        iVar4 = *(int *)(in_ECX + 0x94);
        iVar6 = iVar4 + 1;
        if ((int)*(uint *)(in_ECX + 0x90) < iVar6) {
          if (iVar6 < 0) {
            iVar6 = iVar4 + 2;
          }
          uVar7 = iVar4 + 9 + (iVar6 >> 1) & 0xfffffff8;
          if (*(uint *)(in_ECX + 0x90) != uVar7) {
            if ((int)uVar7 < 1) {
              FID_conflict__free((void *)*piVar5);
              *piVar5 = 0;
            }
            else if (*piVar5 == 0) {
              iVar4 = FUN_004c554b();
              *piVar5 = iVar4;
            }
            else {
              iVar4 = FUN_004c553b();
              *piVar5 = iVar4;
            }
            *(uint *)(in_ECX + 0x90) = uVar7;
          }
        }
        iVar4 = *(int *)(in_ECX + 0x94);
        *(int *)(in_ECX + 0x94) = iVar4 + 1;
        *(undefined4 **)(*piVar5 + iVar4 * 4) = local_24;
        if (local_24 != (undefined4 *)0x0) {
          LOCK();
          local_24[1] = local_24[1] + 1;
          UNLOCK();
          goto LAB_0053923e;
        }
      }
      local_18 = local_18 + 1;
    } while (local_18 < local_2c);
  }
  FUN_006e7e60();
  FUN_006e6400(&pTStack_54);
  FUN_006ce9f0(1);
  if (*(int *)(in_ECX + 0x94) == 0) {
    (**(code **)(*(int *)(in_ECX + 0x98) + 0x28))();
    (**(code **)(*(int *)(in_ECX + 0x168) + 0x28))();
  }
  else {
    (**(code **)(*(int *)(in_ECX + 0x98) + 0x28))();
    (**(code **)(*(int *)(in_ECX + 0x168) + 0x28))();
  }
  pTStack_54 = *(TypeDescriptor **)(in_ECX + 0x18);
  FUN_006e9790(0,0x14);
  pTStack_54 = *(TypeDescriptor **)(in_ECX + 0x18);
  FUN_006e9790(*(undefined4 *)(in_ECX + 0x10),*(undefined4 *)(in_ECX + 0x14));
  iVar4 = *(int *)(in_ECX + 0xc);
  do {
    if (iVar4 == 0) {
joined_r0x00539333:
      while (0 < local_2c) {
        local_2c = local_2c + -1;
        puVar2 = *(undefined4 **)((int)local_34 + local_2c * 4);
        if (puVar2 != (undefined4 *)0x0) {
          LOCK();
          piVar5 = puVar2 + 1;
          iVar4 = *piVar5;
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            pTStack_54 = (TypeDescriptor *)0x539354;
            (**(code **)*puVar2)();
          }
        }
      }
      pTStack_54 = (TypeDescriptor *)0x539363;
      FID_conflict__free(local_34);
      ExceptionList = local_10;
      return;
    }
    pTStack_54 = &ViewPortContainer::RTTI_Type_Descriptor;
    piVar5 = (int *)FUN_006f6dd6(iVar4,0,&juce::Component::RTTI_Type_Descriptor);
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0x84))();
      goto joined_r0x00539333;
    }
    iVar4 = *(int *)(iVar4 + 0xc);
  } while( true );
}

