// rea decompile_all
// name: FUN_0067a0b0
// address: 0x67a0b0
// body: available
// range: 0x67a0b0-0x67a6af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0067a221) */
/* WARNING: Removing unreachable block (ram,0x0067a1e3) */
/* WARNING: Removing unreachable block (ram,0x0067a2b3) */
/* WARNING: Removing unreachable block (ram,0x0067a275) */
/* WARNING: Removing unreachable block (ram,0x0067a32f) */
/* WARNING: Removing unreachable block (ram,0x0067a151) */
/* WARNING: Removing unreachable block (ram,0x0067a18f) */
/* WARNING: Removing unreachable block (ram,0x0067a393) */
/* WARNING: Removing unreachable block (ram,0x0067a2f1) */
/* WARNING: Removing unreachable block (ram,0x0067a3d1) */
/* WARNING: Removing unreachable block (ram,0x0067a40f) */
/* WARNING: Removing unreachable block (ram,0x0067a44d) */
/* WARNING: Removing unreachable block (ram,0x0067a48b) */
/* WARNING: Removing unreachable block (ram,0x0067a4c9) */

void FUN_0067a0b0(code *param_1)

{
  int *piVar1;
  undefined1 uVar2;
  int iVar3;
  int *in_ECX;
  int iVar4;
  char cVar5;
  float10 fVar6;
  int *local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  int *local_38;
  float local_34;
  float local_30;
  float local_2c;
  int *local_28;
  float local_24;
  int *local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  piVar1 = (int *)param_1;
  while( true ) {
    if ((undefined **)*piVar1 == juce::MemoryInputStream::vftable) {
      cVar5 = (uint)piVar1[2] <= (uint)piVar1[3];
    }
    else {
      cVar5 = (*(code *)((undefined **)*piVar1)[2])();
    }
    if (cVar5 != '\0') break;
    if ((undefined **)*piVar1 == juce::MemoryInputStream::vftable) {
      param_1 = (code *)((uint)param_1 & 0xffffff);
      FUN_00622c70((int)&param_1 + 3,1);
      uVar2 = param_1._3_1_;
    }
    else {
      uVar2 = (*(code *)((undefined **)*piVar1)[4])();
    }
    switch(uVar2) {
    case 0x62:
      param_1 = (code *)((undefined **)*piVar1)[0xc];
      if ((undefined **)*piVar1 == juce::MemoryInputStream::vftable) {
        iVar3 = FUN_00622c70(&local_3c,4);
        local_18 = 0.0;
        if (iVar3 == 4) {
          local_18 = local_3c;
        }
      }
      else {
        fVar6 = (float10)(*param_1)();
        local_18 = (float)fVar6;
      }
      param_1 = (code *)((undefined **)*piVar1)[0xc];
      if ((undefined **)*piVar1 == juce::MemoryInputStream::vftable) {
        iVar3 = FUN_00622c70(&local_40,4);
        local_14 = 0.0;
        if (iVar3 == 4) {
          local_14 = local_40;
        }
      }
      else {
        fVar6 = (float10)(*param_1)();
        local_14 = (float)fVar6;
      }
      param_1 = (code *)((undefined **)*piVar1)[0xc];
      if ((undefined **)*piVar1 == juce::MemoryInputStream::vftable) {
        iVar3 = FUN_00622c70(&local_44,4);
        local_8 = 0.0;
        if (iVar3 == 4) {
          local_8 = local_44;
        }
      }
      else {
        fVar6 = (float10)(*param_1)();
        local_8 = (float)fVar6;
      }
      param_1 = (code *)((undefined **)*piVar1)[0xc];
      if ((undefined **)*piVar1 == juce::MemoryInputStream::vftable) {
        iVar3 = FUN_00622c70(&local_48,4);
        local_c = 0.0;
        if (iVar3 == 4) {
          local_c = local_48;
        }
      }
      else {
        fVar6 = (float10)(*param_1)();
        local_c = (float)fVar6;
      }
      param_1 = (code *)((undefined **)*piVar1)[0xc];
      if ((undefined **)*piVar1 == juce::MemoryInputStream::vftable) {
        iVar3 = FUN_00622c70(&local_4c,4);
        local_10 = 0.0;
        if (iVar3 == 4) {
          local_10 = local_4c;
        }
      }
      else {
        fVar6 = (float10)(*param_1)();
        local_10 = (float)fVar6;
      }
      param_1 = (code *)((undefined **)*piVar1)[0xc];
      if ((undefined **)*piVar1 == juce::MemoryInputStream::vftable) {
        iVar3 = FUN_00622c70(&local_50,4);
        param_1 = (code *)0x0;
        if (iVar3 == 4) {
          param_1 = (code *)local_50;
        }
      }
      else {
        fVar6 = (float10)(*param_1)();
        param_1 = (code *)(float)fVar6;
      }
      FUN_0067c020(local_c,local_10,param_1);
      break;
    case 99:
      iVar3 = in_ECX[2];
      if ((iVar3 != 0) && (*(float *)(*in_ECX + -4 + iVar3 * 4) != 100005.0)) {
        iVar4 = iVar3 + 1;
        if (in_ECX[1] < iVar4) {
          if (iVar4 < 0) {
            iVar4 = iVar3 + 2;
          }
          FUN_00409cf0((iVar4 >> 1) + iVar3 + 9 & 0xfffffff8);
        }
        iVar3 = in_ECX[2];
        in_ECX[2] = iVar3 + 1;
        *(undefined4 *)(*in_ECX + iVar3 * 4) = 0x47c35280;
      }
      break;
    case 0x65:
      return;
    case 0x6c:
      param_1 = (code *)((undefined **)*piVar1)[0xc];
      if ((undefined **)*piVar1 == juce::MemoryInputStream::vftable) {
        iVar3 = FUN_00622c70(&local_24,4);
        local_8 = 0.0;
        if (iVar3 == 4) {
          local_8 = local_24;
        }
      }
      else {
        fVar6 = (float10)(*param_1)();
        local_8 = (float)fVar6;
      }
      param_1 = (code *)((undefined **)*piVar1)[0xc];
      if ((undefined **)*piVar1 == juce::MemoryInputStream::vftable) {
        iVar3 = FUN_00622c70(&local_28,4);
        param_1 = (code *)0x0;
        if (iVar3 == 4) {
          param_1 = (code *)local_28;
        }
      }
      else {
        fVar6 = (float10)(*param_1)();
        param_1 = (code *)(float)fVar6;
      }
      FUN_00682d90();
      break;
    case 0x6d:
      param_1 = (code *)((undefined **)*piVar1)[0xc];
      if ((undefined **)*piVar1 == juce::MemoryInputStream::vftable) {
        iVar3 = FUN_00622c70(&local_1c,4);
        local_8 = 0.0;
        if (iVar3 == 4) {
          local_8 = local_1c;
        }
      }
      else {
        fVar6 = (float10)(*param_1)();
        local_8 = (float)fVar6;
      }
      param_1 = (code *)((undefined **)*piVar1)[0xc];
      if ((undefined **)*piVar1 == juce::MemoryInputStream::vftable) {
        iVar3 = FUN_00622c70(&local_20,4);
        param_1 = (code *)0x0;
        if (iVar3 == 4) {
          param_1 = (code *)local_20;
        }
      }
      else {
        fVar6 = (float10)(*param_1)();
        param_1 = (code *)(float)fVar6;
      }
      FUN_00682e50();
      break;
    case 0x6e:
      *(undefined1 *)(in_ECX + 7) = 1;
      break;
    case 0x71:
      param_1 = (code *)((undefined **)*piVar1)[0xc];
      if ((undefined **)*piVar1 == juce::MemoryInputStream::vftable) {
        iVar3 = FUN_00622c70(&local_2c,4);
        local_10 = 0.0;
        if (iVar3 == 4) {
          local_10 = local_2c;
        }
      }
      else {
        fVar6 = (float10)(*param_1)();
        local_10 = (float)fVar6;
      }
      param_1 = (code *)((undefined **)*piVar1)[0xc];
      if ((undefined **)*piVar1 == juce::MemoryInputStream::vftable) {
        iVar3 = FUN_00622c70(&local_30,4);
        local_c = 0.0;
        if (iVar3 == 4) {
          local_c = local_30;
        }
      }
      else {
        fVar6 = (float10)(*param_1)();
        local_c = (float)fVar6;
      }
      param_1 = (code *)((undefined **)*piVar1)[0xc];
      if ((undefined **)*piVar1 == juce::MemoryInputStream::vftable) {
        iVar3 = FUN_00622c70(&local_34,4);
        local_8 = 0.0;
        if (iVar3 == 4) {
          local_8 = local_34;
        }
      }
      else {
        fVar6 = (float10)(*param_1)();
        local_8 = (float)fVar6;
      }
      param_1 = (code *)((undefined **)*piVar1)[0xc];
      if ((undefined **)*piVar1 == juce::MemoryInputStream::vftable) {
        iVar3 = FUN_00622c70(&local_38,4);
        param_1 = (code *)0x0;
        if (iVar3 == 4) {
          param_1 = (code *)local_38;
        }
      }
      else {
        fVar6 = (float10)(*param_1)();
        param_1 = (code *)(float)fVar6;
      }
      FUN_0067c1c0(param_1);
      break;
    case 0x7a:
      *(undefined1 *)(in_ECX + 7) = 0;
    }
  }
  return;
}

