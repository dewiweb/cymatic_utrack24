// rea decompile_all
// name: CArchive::ReadClass
// address: 0x1001b2bc
// body: available
// range: 0x1001b2bc-0x1001b4be inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001b2d4 to 0x1000937c FUN_1000937c (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1001b2ea to 0x1000904c FUN_1000904c (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1001b3de to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: struct CRuntimeClass * __thiscall CArchive::ReadClass(struct CRuntimeClass const
   *,unsigned int *,unsigned long *)
   
   Library: Visual Studio 2010 Release */

CRuntimeClass * __thiscall
CArchive::ReadClass(CArchive *this,CRuntimeClass *param_1,uint *param_2,ulong *param_3)

{
  uint uVar1;
  void *pvVar2;
  CRuntimeClass *this_00;
  void **ppvVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  void *local_14;
  uint local_10;
  void *local_c;
  void *local_8;
  
  if (((byte)this[0x18] & 1) == 0) {
    pcVar6 = *(char **)(this + 0x14);
    iVar5 = 1;
    goto LAB_1001b2d4;
  }
  if ((param_1 != (CRuntimeClass *)0x0) && (*(int *)(param_1 + 8) == 0xffff)) {
                    /* WARNING: Subroutine does not return */
    FUN_1000904c();
  }
  MapObject(this,(CObject *)0x0);
  operator>>(this,(ushort *)&local_8);
  if ((short)local_8 == 0x7fff) {
    operator>>(this,(long *)&local_10);
  }
  else {
    local_10 = ((uint)local_8 & 0x8000) << 0x10 | (uint)local_8 & 0x7fff;
  }
  uVar1 = local_10;
  if ((local_10 & 0x80000000) == 0) {
    if (param_3 != (ulong *)0x0) {
      *param_3 = local_10;
      return (CRuntimeClass *)0x0;
    }
  }
  else {
    if ((short)local_8 == -1) {
      this_00 = CRuntimeClass::Load(this,(uint *)&local_c);
      if (this_00 != (CRuntimeClass *)0x0) {
        if ((void *)(*(uint *)(this_00 + 8) & 0x7fffffff) != local_c) {
          if ((*(uint *)(this_00 + 8) & 0x80000000) == 0) {
            pcVar6 = *(char **)(this + 0x14);
            iVar5 = 7;
            goto LAB_1001b2d4;
          }
          FUN_1001afef((int)this);
          pvVar2 = local_c;
          ppvVar3 = CMapPtrToPtr::operator[](*(CMapPtrToPtr **)(this + 0x3c),this_00);
          *ppvVar3 = pvVar2;
        }
        CheckCount(this);
        FUN_1000a2f0(*(void **)(this + 0x38),*(int *)(this + 0x34),this_00,1);
        local_14 = (void *)0x0;
        CMapPtrToPtr::Lookup(*(CMapPtrToPtr **)(this + 0x3c),(void *)0x1,&local_14);
        if (local_14 == (void *)0x0) goto LAB_1001b3de;
        local_8 = (void *)0x1;
        FUN_1001af1b(local_14,*(int *)(this + 0x34),&local_8,1);
        *(int *)(this + 0x34) = *(int *)(this + 0x34) + 1;
LAB_1001b481:
        if ((param_1 == (CRuntimeClass *)0x0) ||
           (iVar5 = CRuntimeClass::IsDerivedFrom(this_00,param_1), iVar5 != 0)) {
          if (param_2 == (uint *)0x0) {
            *(void **)(this + 0x10) = local_c;
          }
          else {
            *param_2 = (uint)local_c;
          }
          if (param_3 != (ulong *)0x0) {
            *param_3 = local_10;
          }
          return this_00;
        }
      }
      pcVar6 = *(char **)(this + 0x14);
      iVar5 = 6;
      goto LAB_1001b2d4;
    }
    uVar4 = local_10 & 0x7fffffff;
    if ((uVar4 != 0) && (uVar4 <= *(int *)(*(int *)(this + 0x38) + 8) - 1U)) {
      local_8 = (void *)0x0;
      CMapPtrToPtr::Lookup(*(CMapPtrToPtr **)(this + 0x3c),(void *)0x1,&local_8);
      if ((local_8 == (void *)0x0) || (*(int *)((int)local_8 + 8) <= (int)uVar4)) {
LAB_1001b3de:
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      if (*(int *)(*(int *)((int)local_8 + 4) + uVar1 * 4) != 2) {
        if (*(int *)(*(int *)(this + 0x38) + 8) <= (int)uVar4) goto LAB_1001b3de;
        this_00 = *(CRuntimeClass **)(*(int *)(*(int *)(this + 0x38) + 4) + uVar1 * 4);
        local_c = (void *)0x0;
        if ((*(CMapPtrToPtr **)(this + 0x3c) == (CMapPtrToPtr *)0x0) ||
           (iVar5 = CMapPtrToPtr::Lookup(*(CMapPtrToPtr **)(this + 0x3c),this_00,&local_8),
           local_c = local_8, iVar5 == 0)) {
          local_c = (void *)(*(uint *)(this_00 + 8) & 0x7fffffff);
        }
        goto LAB_1001b481;
      }
    }
  }
  pcVar6 = *(char **)(this + 0x14);
  iVar5 = 5;
LAB_1001b2d4:
                    /* WARNING: Subroutine does not return */
  FUN_1000937c(iVar5,pcVar6);
}

